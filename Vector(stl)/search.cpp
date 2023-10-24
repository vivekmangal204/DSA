#include<iostream>
#include<vector>//Header File
#include<algorithm>
using namespace std;
int main()
{
    vector<int>ans;
    ans.push_back(51);
    ans.push_back(15);
    ans.push_back(22);
    ans.push_back(54);
    ans.push_back(91);
    //Sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    //Search in Binary Search
    cout<<binary_search(ans.begin(),ans.end(),54)<<endl;
    cout<<find(ans.begin(),ans.end(),54) - ans.begin()<<endl;
}
// //Sort
// 1: sort(v.begin(),v.end());
// 2: sort(v.begin(),v.end(), greater<int>());
// //Search
// 1: bool found = binary_search(v.begin(),v.end(),5);
// 2: auto it = find(v.begin(),v.end(),6);
// //Count
// 1. int count = count(v.begin(),v.end(),5);
// //Max or Min
// int maximum = max_element(v.begin(),v.end());
// //
// 1: lower_bound(first_iterator,last_iterator,x);
// ~ returns an iterator pointing to the first element in the range 
// [first,last) which has a value not less than 'x'.
// 2: upper_bound(first_iterator,last_iterator,x)
// ~ returns an iterator pointing to the the first element in the range 
// [first,last) Which has a value greater than 'x'.