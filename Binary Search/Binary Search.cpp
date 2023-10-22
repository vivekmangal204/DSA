//Binary Search is always on sorted Array
#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    //Size of Array
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    //Elements of Array
    cout<<"Enter the Element of Array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //Input Key
    int key;
    cout<<"Enter the number:";
    cin>>key;
    //Logic Starts Here ----->
    int start = 0, end = n-1;
    while(start<=end)
    {
        int mid;
        //First Find Middle Value
        // mid = (start + end)/2;
        mid = start + (end-start)/2;
        if(arr[mid] == key)
        {
            cout<<mid<<endl;
            break;
        }
        //if middle value is less than key
        else if(arr[mid]<key)
            //Left Side
            start = mid + 1;
        else
            //Right Side
            end = mid - 1;
    }
    return 0;
}