class Solution
{
    public:
    vector<int> printlist(struct ListNode* head)
    {
        vector<int> res;
        printlist(head, res);
        return res;
    }

    void printlist(struct ListNode* head, vector<int> &res)
    {
        if(head != NULL)
        {
            printlist(head->next,res);
            res.push_back(head->val);
        }
    }

};

class Solution{
    public:
        vector<int> res;
        vector<int> printlist(struct ListNode* head)
        {
            if(head != NULL)
            {
                printlist(head->next);
                res.push_back(head->val);
            }

            return res;
        }
};
