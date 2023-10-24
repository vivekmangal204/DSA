#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of arry:";
    cin>>n;
    int nums[1000];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    cin>>nums[i];

    int start = 0, end = n-1, ans;
     while(start<=end)
        {
            int mid = start + (end - start)/2;
            //Left side sorted araray
            if(nums[mid]>=nums[0])
            start = mid + 1;
            //Right side sorted array
            else
            {
                ans = nums[mid];
                end = mid - 1;
            }
        }
        cout<<ans<<endl;

}