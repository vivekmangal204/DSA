#include<iostream>
#include<vector>//Header File
#include<algorithm>
using namespace std;
int main()
{
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(15);
    ans.push_back(2);
    ans.push_back(1);
    ans.push_back(9);
    //Sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    //Sort in Decreasing order
    // sort(ans.begin(),ans.end(),greater<int>());
    sort(ans.rbegin(),ans.rend());//Method 2 for decreasing order
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}