/* find 3rd minimum element in array*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {56,34,12,3,4,1,90,-23,5,6};
    int min = arr[0];

    for (size_t i = 1; i < 10; i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }

    // finding second min 
    int second_min = INT32_MIN;
    for (size_t i = 0; i < 10; i++)
    {
        if(arr[i]!=min && arr[i] < second_min)
        second_min=arr[i];
    }
    //finding third min 
    int third_min = INT32_MIN;
    for (size_t i = 0; i < 10; i++)
    {
        if(arr[i]!=min && arr[i]!=second_min && arr[i] < third_min)
        third_min=arr[i];
    }

    cout<<"the third min element in array is "<<third_min;

}