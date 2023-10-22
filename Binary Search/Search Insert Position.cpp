#include<iostream>
using namespace std;
int main()
{
    //Size of Array
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[1000];
    //Elements of Array
    cout<<"Enter the Elements of Array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //Target Value
    int target;
    cout<<"Enter the Target Value: ";
    cin>>target;
    //Logic starts here --------------->
    
    int start=0, end=n-1,mid,index;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==target)
        {
            index = mid;
            break;
        }
        else if(arr[mid]<target)
            start = mid + 1;
        else
            index = mid;
            end = mid - 1;
    }
    cout<<"Insert Position on Index: "<<index<<endl;
    return 0;
}