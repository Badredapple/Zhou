#include <cstdio>
#include <cstring>

void Replaceblankk(char str[], int length)
{
    if(str == nullptr && length <= 0)
        return;
    
    int originalLength = 0;
    int numberOfBlank = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        ++originalLength;

        if(str[i] == ' ')
            ++numberOfBlank;
        ++i;
    }

    int newLength = orginalLength + numberOfBlank*2;
    if(newLength >length)
        return;
    int indexOfOriginal = orginalLength;
    int indexOfNew = newLength;
    while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
    {
        if(str[indexOfOriginal] == ' ')
        {
            str[indexOfNew --] = '0';
            str[indexOfNew--] = '2';
            str[indexOfNew--] = '%';
        }
        else
        {
            str[indexOfNew--] = str[indexOfOriginal];
        }
        
        --indexOfOriginal;
    }
}

void test(char* testName, char str[], int length, char expected[])
{
    if(testName != nullptr)
        printf("%s begins:", testName);
    ReplaceBlank(str, length);

    if(expected == nullptr &&str == nullptr)
        printf("passed.\n");
    else if(expected == nullptr &&str != nullptr)
        printf("failed.\n");
    else if(strcmp(str, expected) == 0)
        printf("passed.\n");
    else
        printf("failed.\n");
}

void Test1()
{
    const int length = 100;
    char str[length] = "hello world";
    Test("Test1", str, length, "hello%20world");
}

int main(int argc, char* argv[])
{
    Test1();

    return 0;
}