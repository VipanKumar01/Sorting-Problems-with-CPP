// Insertion Sorting Algorithm and Implimentation

// Name = Vipan Kumar
// User Name = @VipanKumar01



#include <iostream>
using namespace std;

// Implimantation of Insertion Sort
void insertionSort(int arr[],int n)
{
    int temp,j; // Creating a temporary Variable
    
    // Managing one by one element of the array 
    for(int i=1;i<n;i++)
    {
        temp = arr[i];
        j=i-1;
        
        // That Compare the temp of arr[j] && j is always greater than 0
        while(j>=0 && temp<arr[j])
        {
            // Here, The Process contains Swapping 
            arr[j+1]=arr[j];
            j=j-1;
        }
        // Than Assigning value to arr[j+1]
        arr[j+1]=temp;
    }
}

// Simply Displaying the Array
void displayArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main() {
    int arr[] = { 62, 131, 63, 58, 64, 23, 1}; 
    // Finding Size of the Array
    int size = sizeof(arr)/sizeof(int); 
    
    insertionSort(arr,size);
    displayArray(arr,size);
    return 0;
}


//  --HappyCode--
