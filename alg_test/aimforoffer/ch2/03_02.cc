#include <iostream>
using namespace std;

int coutRange(const int* numbers, int length, int start, int end);

int getDuplication(const int* numbers, int length)
{
    if(numbers == nullptr || length <= 0)
        return -1;
    
    int start = 1;
    int end = length -1;
    while(end >= start)
    {
        int middle = ((end -start) >> 1) + start;
        int count = coutRange(numbers, length, start, middle);
        if(end == start)
        {
            if(count > 1)
                return start;
            else
                break;
        }
        
        if(count > (middle - start +1))
            end = middle;
        else
            start = middle +1;
    }
    return -1;
}

int countRange(const int* numbers, int length, int start, int end)
{
    if(numbers == nullptr)
        return 0;
    int count = 0;
    for(int i = 0; i < length; ++i)
        if(numbers[i] >= start && numbers[i] <= end)
            ++count;
    return count;
}

void test(const char* testName, int* numbers, int length, int* duplications, int dupLength)
{
    int result = getDuplication(numbers, length);
    for(int i = 0; i< dupLength; ++i)
    {
        if(result == duplications[i])
        {
            std::cout << testName << "Passed." << std::endl;
            return;
        }
    }
    std::cout << testName << "FAILED."<< std::endl;
}
void test1()
{
    int numbers[] = {2, 3, 5, 3, 2, 6, 7 };
    int duplications[]  = {2,3};
    test("test1", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));

}

int main()
{
    test1();
}