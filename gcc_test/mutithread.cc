#include <iostream>

#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void* hello(void* args)
{
    cout<<"hello mutithread!"<<endl;
    return 0;
}

int main()
{
    // define thread id 
    pthread_t tids[NUM_THREADS];
    for(int i =0; i< NUM_THREADS;++i)
    {
        int ret = pthread_create(&tids[i],NULL, hello, NULL);
        if(ret != 0)
        {
            cout << "pthread create error:error_code="<<ret <<endl;
        }
    
    }

    pthread_exit(NULL);

}
