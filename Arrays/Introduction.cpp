#include<iostream>
using namespace std;
int main()
{
    int a[5]; //  array declare
    int rollno[5] = {23,45,56,21,33};
    // displaying these elements.
    for(int i =0;i<5;i++)
    {
        cout<<rollno[i]<<" ";
    }
    cout<<endl;
    // 2nd way to create array.
    int persons[]={22,33,44,55,66};// have not given size but defined with elements here.
    for(int i =0;i<5;i++)
    {
        cout<<persons[i]<<" ";
    }
    cout<<endl;
    // third way to define array incompletely.
    int bullets[7] ={12,52,34};
    for(int i =0;i<7;i++)
    {
        cout<<bullets[i]<<" ";
    }
    cout<<endl;
    // fourth way .
    int engineers[7] = {0};// here only can be initialized with zero.
    for(int i =0;i<7;i++)
    {
        cout<<engineers[i]<<" ";
    }
    cout<<endl;
    // now take user input in arrays .
    int inputs[5];
    for(int i =0;i<5;i++)
    {
        cin>>inputs[i];
    }
    // displaying the elements
    for(int i =0;i<5;i++)
    {
        cout<<inputs[i]<<" ";
    }
    // making more dynamic arrays where size is also given runtime by the user.
    int size;
    cin>>size; // this is not at all recommended in practice usually gives a lot of errors when code becomes lengthy.

    int cusarr[size];
    for(int i =0;i<size;i++)
    {
        cin>>cusarr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<cusarr[i];
    }
    cout<<endl;
    // instead size of array should be constant 
    int ARR_SIZE = 100;
    int custarr[ARR_SIZE];
   // now user can input the desired size which should be less than max size of array.

   int arr[10] ={1,2,3,4,5};
   cout<<arr[5];
   int sizeofarr = sizeof(arr)/sizeof(arr[0]);
   cout<<"size of array is : "<<sizeofarr;
    return 0;
}