#include <iostream>
using namespace std;
void acceptArray(int arr[], int n)
{
    cout << "Enter element are - " << n ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void displayArray(int arr[], int n)
{
    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void sorting(int arr[], int n)
{
   
    for (int i = 0; i < n; i++){
        for(int j=0;j<n-i-1;j++){
             if (arr[j] > arr[j + 1])
             {
                swap(arr[j], arr[j + 1]);
             }
        }
    }
   
}
void swap(int &m,int &n){
    int temp=m;
    m=n;
    n=temp;
}



int main(){
int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];  
    acceptArray(arr, n);
    cout<<" befor sorting\n ";
   
    displayArray(arr, n);
   
     sorting(arr,n);
     cout<<" \n after sorting element\n";
      displayArray(arr,n);
    return 0;
}
