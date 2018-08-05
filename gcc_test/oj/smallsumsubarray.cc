#include <iostream>
//find the smallest sum subarray 

using namespace std;
int smallestSumSubarr(int arr[], int n)
{
    int INT_MAX = 9999;
    // to store the minimu value that is ending;
    // up to the current index
    int min_ending_here =INT_MAX;
    
    // to store the minimum value encountered so far
    int min_so_far = INT_MAX;
    
    //traverse the array elements
    for(int i=0; i<n; i++)
    {
    //if min_ending_here > 0 to min_ending_here
    //contribute to the minimum sum further
        if(min_ending_here > 0)
            min_ending_here = arr[i];

        //else add the value arr[i] to min_ending_here
        else
            min_ending_here += arr[i];

        //update min_so_far
        min_so_far = min(min_so_far, min_ending_here);
    }

    //required smallest sum contiguous subarray value
    return min_so_far;
}

int main()
{
    int arr[] {3,-4,2,-3,-1,7,-5,-6-4,7,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Smallest sum is :"
        <<smallestSumSubarr(arr,n)<<endl;
    return 0;

}
