#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    public:
        bool Find(vector<vector<int>>array, int target)
        {
            int row = 0, col = 0, t = 0;
            bool isFound = false;

            for(int i=0; i<array.size(); ++i)
            {
                for(int j=0; j<array[i].size(); ++i)
                {
                    //input and check
                    if(false == isFound && target == array[i][j])
                    {
                        isFound = true;
                    }
                }
            }
        
        }

}
