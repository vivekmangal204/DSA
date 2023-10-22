#include<iostream>
using namespace std;
int main()
{
    int n,arr[1000];
    //Size of array
    cout<<"Enter the Size of Array: ";
    cin>>n;
    //Element of Array
    cout<<"Enter the Elements of Array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //Enter the Target
    int target;
    cout<<"Enter the Target Value: ";
    cin>>target;
    //Logic Starts Here ----------->
    //First Occurence of The Target Value :
    int start = 0, end = n-1;
    int mid, first = -1, last = -1;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==target)
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]<target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    //Last Occurence of The Target Value :
    cout<<"First Occurence on index: "<<first<<endl;
    start = 0, end = n-1;
        while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==target)
        {
            last = mid;
            start = mid + 1;//Left
        }
        else if(arr[mid]<target)
            start = mid + 1;
        else
            end = mid - 1;//Right
    }
    cout<<"Last Occurence on index: "<<last<<endl;

}
