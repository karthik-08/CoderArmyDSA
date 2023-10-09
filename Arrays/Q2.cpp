/* find the minimum of all the elements of the array*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {56,34,12,3,4,1,90,-23,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = INT16_MAX;
    for (size_t i = 0; i < size; i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<"the min element in array is "<<ans;

}