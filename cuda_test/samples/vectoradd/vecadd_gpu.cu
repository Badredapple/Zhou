#include<stdio.h>
#define N 20
__global__ void vecadd(int *a, int *b, int *c)
{
    int tid =threadIdx.x;
    if(tid < N)
    {
        c[tid] = a[tid]+b[tid];    
    }
}

int main(void)
{
    int a[N], b[N], c[N];
    int *dev_a, *dev_b, *dev_c;
    for(int i=0; i<N;++i)
    {
        a[i] = -i;
        b[i] = i*i;
    }

    cudaMalloc( (void **)&dev_a, N*sizeof(int) );
    cudaMalloc( (void **)&dev_b, N*sizeof(int) );
    cudaMalloc( (void **)&dev_c, N*sizeof(int) );
    

    cudaMemcpy(dev_a, a, N*sizeof(int), cudaMemcpyHostToDevice);
    cudaMemcpy(dev_b, b, N*sizeof(int), cudaMemcpyHostToDevice);
    vecadd<<<1, N>>>(dev_a, dev_b, dev_c);
    cudaMemcpy(c,dev_c, N*sizeof(int), cudaMemcpyDeviceToHost);

    for(int i=0; i<N;++i)
    {
        printf("%d +%d = %d\n", a[i], b[i], c[i]);
    }


    cudaFree(dev_a);
    cudaFree(dev_b);
    cudaFree(dev_c);
}
