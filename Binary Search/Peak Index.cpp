#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of Array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int start = 0, end = n-1,mid;
    while(start<=end)
    {
        // mid = start + (end - start)/2;
        mid = end + (start-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
       {
         cout<<mid;
         break;
       }
        else if(arr[mid]>arr[mid-1])
        start = mid + 1;
        else
        end = mid - 1;
    }
    // cout<<ans;
}