// Bubble Sorting Using Recursion Algorithm and Implimentation

// Name = Vipan Kumar
// User Name = @VipanKumar01
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
    // Recursion of the Method 
    bubbleSortUsingRecursion(arr,n-1);
}

// Simply Displaying the Array Elements
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
    // Finding the Size of the Array
    int size = sizeof(arr)/sizeof(int);
    
    bubbleSortUsingRecursion(arr,size);
    displayArray(arr,size);
    return 0;
}

//  --HappyCode--
