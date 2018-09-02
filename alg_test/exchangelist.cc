#include <iostream>

#include <stack>
#include <vector>

using namespace std;

struct ListNode
{
    public:
    int val;
    struct ListNode *next;
    /* LISTNODE(int x)
    val(x), next(NULL)
    {
      }*/ 
};

class Solution
{
    public:
        vector<int> printlist(struct ListNode* head)
        {
            ListNode *node = head;
            stack<int> st;
            int cout = 0;
            while(node != NULL)
            {
                cout << node->val <<"in stack"<<endl;
                st.push(node->val);

                count++;
                node = node->next;
            }

            vector<int> res(count);
            cout << "count = "<<count<<endl;
            for(int i=0; i<count && st.empty() != true; i++)
            {
             cout<<st.top() <<"in vector"<<endl;

             res[i] =st.top();
             st.pop();

            }
            return res;
        }
};

int main()
{
    ListNode list[4];
    list[0].val = 1;
    list[0].next = &list[1];
    list[1].val =2;
    list[1].next = &list[2];
    list[2].val =3;
    list[2].next = &list[3];
    list[3].val =4;
    list[3].next = &list[4];

    Solution solu;
    vector<int> res = solu.printlist(list)
    cout <<"there are"<<res.size()<<"datas in vector."<<endl;
    for(int i=0; i <res.size(); i++)
    {
        cout<<res[i] <<endl;
    }    

    return 0;
}
