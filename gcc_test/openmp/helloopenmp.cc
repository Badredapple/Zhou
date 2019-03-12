//file : hello openmp.cc 
#include <iostream>
#include <stdlib.h>
#include <omp.h>

using namespace std;

int main (int argc, char **argv)
{
    int numThr = atoi (argv[1]);
#pragma omp parallel num_threads(numThr) 
    cout<<"helo from openmp" << omp_get_thread_num()<<endl;
    return 0;
}
