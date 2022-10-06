// Bubble Sorting Algorithm and Implimentation

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

void bubbleSort(int arr[],int n)
{
    // In outer for Loop the Iteration goes to the end of the array
    for(int i=0;i<n-1;i++){
        // In inner for Loop the Iteration goes to the n-1 in every step so The Last i'th element are already in place
        for(int j=0;j<=n-i-1;j++){
            // Now comparing the elements together
            if (arr[j] > arr[j+1])
            {
                // and Send those elements as the parameter
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void display(int arr[], int n)
{
    // Simply Printing the array elements
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}



int main() {
    
    int i,j;
    int arr[] = {54,4,32,33,6,7,65,77};
    // Simply Finding the Lenght of the Array
    int size = sizeof(arr)/sizeof(int);
    
    // calling the Functions/Methods
    bubbleSort(arr,size);
    display(arr,size);
    
    return 0;
}


//  --HappyCode--
