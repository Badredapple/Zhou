#include <iostream>

using namespace std;

class Solution
{
    public:
        void replaceSpace(char *str, int length)
        {
            int i=length-1,j;
            int len=length;

            for(i=length -1; i>= 0; i--)
            {
                //cout <<str[i] <<endl;
                //
                if(str[i] == '  ')
                {
                    // space %20 become 2 times
                    len += 2;
                    for(j=len-1; j>i+2; j--)
                    {
                        str[j] = str[j-2];
                    }
                    str[j--] = '0';
                    str[j--] = '2';
                    str[j--] = '\%';
                }
                //cout <<str<<endl;
            }
       str[len] = '\0'; 
        }
};

int main()
{
    char str[10 + 1] ="a b c d";
    Solution solu;
    solu.replaceSpace(str,10);
    cout << str <<endl;
    return 0;

}
