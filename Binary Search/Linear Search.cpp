//Linear Search
#include<iostream>
using namespace std;
int main()
{
    //Size of Array
    int n,arr[1000];
    cout<<"Enter size of Array: ";
    cin>>n;
    //Elements of Array
    cout<<"Enter elements of Array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //Taking Input of Number We have to find
    int k;
    cout<<"Enter the number you want to find: ";
    cin>>k;
    //Checking
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            //Print Output
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}