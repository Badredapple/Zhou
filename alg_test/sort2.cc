#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    public:
        bool Find(vector<vector<int>>arrary, int target)
        {
            bool res = false;
            int row = arrary.size();
            int col = arrary[0].size();

            //check if 
            
            for(int i=0, j=col-1;
                    (i >=0 && i< row)&& (j>=0&&j<col);)
            {
                if(target == arrary[i][j])
                {
                     res = true;
                    break;
                }   
                else if(target < arrary[i][j])
                {
                    cout<<target<<"<"<<arrary[i][j]<<"turn left"<<endl;
                    j--;
                }
                else
                {
                    cout<<target<<">"<<arrary[i][j]<<"turn down"<<endl;
                    i++;
                }
            }
            return res;
        }




};

int __main()
{
    int a1[] = {1,2,8,9,};
    int a2[] = {2,4,8,12};
    int a3[] = {4,7,10,13};
    int a4[] = {6,8,11,15};

    vector<vector<int>> arrary;

    arrary.push_back(vector<int>(a1, a1+4));
    arrary.push_back(vector<int>(a2, a2+4));
    arrary.push_back(vector<int>(a3, a3+4));
    arrary.push_back(vector<int>(a4, a4+4));
    
    Solution solu;
    cout<<solu.Find(array,7)<<endl;
    return 0;

}

