/*************************************************************************
    > File Name: tiankonguse-bfs-roll.cpp
    > Author: tiankonguse
    > Mail: i@tiankonguse.com 
    > Created Time: 2020年05月13日 13:39:04
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
template <class T>
using min_queue = priority_queue<T, vector<T>, greater<T> >
template <class T>
using max_queue = priority_queue<T>

typedef long long LL;
const double PI = acos(-1.0), eps = 1e-7;
const int INF = 0x3f3f3f3f, ninf = 0xc0c0c0c0, mod = 1000000007;
const int max3 = 4100, max4 = 11100, max5 = 200100, max6 = 2000100;
const int debug = 0;
const int inf = 0x3f3f3f3f;
#define  myprintf(fmt,args...) do{if(debug)printf(fmt, ##args);}while(0)


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> baseQue;
        baseQue.push(root);
        
        while(!baseQue.empty()){
            vector<int> lineAns;
            queue<TreeNode*> nextQue;

            while(!baseQue.empty()){
                TreeNode* now = baseQue.front();
                baseQue.pop();

                if(now == NULL){
                    continue;
                }


                lineAns.push_back(now->val);
                nextQue.push(now->left);
                nextQue.push(now->right);
            }

            if(lineAns.size() > 0){
                ans.push_back(lineAns);
            }
            baseQue.swap(nextQue);
        }

        return ans;
    }
};


int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    if(debug == 0)freopen("out.txt", "w", stdout);
#endif

    return 0;
}
