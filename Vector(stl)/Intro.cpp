#include<iostream>
#include<vector>//Header File
using namespace std;
int main()
{
    //Create Vector,declare
    vector<int>v;
    vector<int>v1(5,1);//Initialize
    //Size and capacity
    cout<<"Size of v1: "<<v1.size()<<endl;//5
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;//5

    cout<<"Size of v: "<<v.size()<<endl;//0
    cout<<"Capacity of v: "<<v.capacity()<<endl;//0
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of v: "<<v.size()<<endl;//1//2//3
    cout<<"Capacity of v: "<<v.capacity()<<endl;//1//2//4
    v1.push_back(8);

    //Update Value
    v1[1]=5;
    cout<<"Size of v1: "<<v1.size()<<endl;//6
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;//10
    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;//7
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;//10  

    vector<int>v3 = {1,2,3,4,5};
    cout<<v3.size();//5
    return 0;
    
    // Delete value from vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(5);
    vnew.push_back(6);
    vnew.push_back(7);
    vnew.push_back(8);
    vnew.pop_back();
    cout<<"Size of vnew: "<<vnew.size()<<endl;//4
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;//8
    vnew.erase(vnew.begin()+1);
    cout<<"Size of vnew: "<<vnew.size()<<endl;//4
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;//8
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";
    vnew.insert(vnew.begin()+1,5);//Insert Value
    cout<<endl;
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";

    vnew[1] = 37; //update the values
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";
    vnew.clear(); //Remove all the elements
    cout<<"Size of vnew: "<<vnew.size()<<endl;//0
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;//8

    vector<int>arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    vector<int>a;
    //Copy value of 1 vector to another
    a = arr;
    cout<<a.size();
    cout<<endl;
    //Printing Method 1
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    //Printing Method 2
    cout<<endl;
    for(auto i: arr)
    cout<<i<<" ";
}