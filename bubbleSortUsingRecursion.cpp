// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp;
    
    // Swapping
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortUsingRecursion(int arr[], int n)
{
    // Base Condition
    if (n==1)
        return;
        
    // If Array has only one Element then it is most Compulsury to count the element
    int count=1;
    
    // for Loop Traverse the Elements
    for(int i=0;i<n;i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(&arr[i],&arr[i+1]);
            count++;
        }
    }
    
    // Checking the Elements
    if (count==0)
        return;
    
    bubbleSortUsingRecursion(arr,n-1);
}

void displayArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}


int main() {
    int arr[] = {54,34,2,54,67,99,567,111};
    int size = sizeof(arr)/sizeof(int);
    
    bubbleSortUsingRecursion(arr,size);
    displayArray(arr,size);
    return 0;
}
