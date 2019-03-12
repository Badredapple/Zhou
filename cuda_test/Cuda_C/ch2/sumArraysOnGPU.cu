#include <cuda_runtime.h>
#include <stdio.h>

void checkResult(float *hostRef, float *gpuRef, const int N) {
    double epsilon = 1.0E-8;
    bool match = 1;
    for(int i=0; i<N; i++){
        if (abs(hostRef[i] - gpuRef[i]) > epsilon) {
            match = 0;
            printf("Arrays do not match ! \n");
            printf("host %5.2f gpu %5.2f at current %d\n", hostRef[i], gpuRef[i], i);
            break;
        }
    }
    if (match) printf("Arrays match.\n \n ");
}

void initialData(float *ip, int size){
    time_t t;
    srand((unsigned) time(&t));

    for(int i =0; i<size;i++) {
        ip[i] = (float)(rand() &0xFF) /10.0f;
    }
}

void sumArraysOnHost(float *A, float *B, float *C, const int N) {
    for(int idx=0; idx<N; idx++)
    {
        C[idx] = A[idx] +B[idx];
    }
}

__global__ void sumArraysOnGPU(float *A, float *B, float *C) {
    int i=threadIdx.x;
    C[i]= A[i]+B[i];
}

int main(int argc, char **argv){
    printf("%s Starting ....\n", argv[0]);
    int dev = 0;
    cudaSetDevice(dev);

    int nElem = 32;
    printf("Vector size %d\n", nElem);
    //malloc host memory
    size_t nBytes = nElem *sizeof(float);

    float *h_A, *h_B, *hostRef, *gpuRef;
    h_A = (float *)malloc(nBytes);
    h_B = (float *)malloc(nBytes);
    hostRef = (float *)malloc(nBytes);
    gpuRef =(float *)malloc(nBytes);

    //initialize data at host side
    initialData(h_A, nElem);
    initialData(h_B, nElem);

    memset(hostRef, 0, nBytes);
    memset(gpuRef, 0, nBytes);

    float *d_A, *d_B, *d_C;
    cudaMemcpy(d_A, h_A, nBytes, cudaMemcpyHostToDevice);
    cudaMemcpy(d_B, h_B, nBytes, cudaMemcpyDeviceToHost);

    dim3 block(nElem);
    dim3 grid(nElem/block.x);
    sumArraysOnGPU<<<grid, block>>>(d_A, d_B, d_C);
    printf("Execution configuration <<<%d, %d>>>\n",grid.x, block.x);

    cudaMemcpy(gpuRef,d_C, nBytes, cudaMemcpyDeviceToHost);

    sumArraysOnHost(h_A, h_B, hostRef, nElem);
    checkResult(hostRef, gpuRef, nElem);

    cudaFree(d_A);
    cudaFree(d_B);
    cudaFree(d_C);

    cudaFree(h_A);
    cudaFree(h_B);
    cudaFree(hostRef);
    cudaFree(gpuRef);

    return (0);

}
