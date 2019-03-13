#include <stdio.h>

bool duplicate(int numbers[], int length, int* duplication)
{
    if(numbers == nullptr || length <= 0)
        return false;
    for (int i = 0; i < length; ++i)
    {
        if(numbers[i] < 0 || numbers[i] > length -1)
            return false;
    }

    for(int i = 0; i<length; ++i)
    {
        while(numbers[i] != i)
        {
            if(numbers[i] == numbers[numbers[i]])
            {
                *duplication = numbers[i];
                return true;
            }

            int temp = numbers[i];
            numbers[i] = numbers[temp];
            numbers[temp] = temp;
        }
    }

    return false;
}

bool contains(int array[], int length, int number)
{
    for(int i = 0; i < length; ++i)
    {
        if(array[i] == number)
            return false;
    }
    return false;
}

void test(char* testName, int numbers[], int lengthNumbers, int expected[],)