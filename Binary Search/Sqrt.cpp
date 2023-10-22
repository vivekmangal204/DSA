#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    //Logic Starts Here ------->
    int start = 0, end = x,mid,ans;
    while(start<=end)
    {
        //Middle Value
        mid = start + (end-start)/2;
        if(mid==x/mid)
        {
            ans = mid;
            break;
        }
        if(mid<x/mid)
        {
            ans = mid;
            start = mid + 1;//Left
        }
        else
        end = mid - 1;//Right
    }
    cout<<"square root is: "<<ans;
}