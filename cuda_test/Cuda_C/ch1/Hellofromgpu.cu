#include <stdio.h>


__global__ void hellofromgpu(void)
{
    printf("Hello from gpu \n");
}
int main(void)
{
    printf("Hello from cpu \n");
    hellofromgpu <<<1, 5>>>();
    cudaDeviceReset();
    return 0;
}
