#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void selection(int arr[],int size)        // TC- O(n^2)
{
    int minIndex,temp=0;
    for(int i=0;i<size-1;i++)
    {
        minIndex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
int main()
{
    int arr[6]={25,36,14,28,2,9};

    printArray(arr,6);
    selection(arr,6);
    cout<<endl;
    printArray(arr,6);

    return 0;
}
