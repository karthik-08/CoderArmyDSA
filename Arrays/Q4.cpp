/* Calculate the average of elements in an array of size 18.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[18];
    int size = sizeof(arr)/sizeof(arr[0]),sum=0;
    for (size_t i = 0; i < size; i++)
    {
        cin>>arr[i];
        sum+= arr[i];
    }
    int avg = sum/size;
    cout<<"avg of all 18 numbers is :"<<avg;
    return 0;
}