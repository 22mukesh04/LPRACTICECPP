/*
 Problem 1 SELECTION SORT 
        We have to arrange an array in increasing order 
        if user enters 
         {51,34,26,3,24,45} --> {3,24,26,34,45,51}

*/

# include<iostream>
using namespace std;

void selection_sort(int arr[],int n){

    for(int i = 0; i < n-1 ; i++){
        int min = i;
        cout<<"\n Value of min and i is : "<<min<<i<<"\n";
        for(int j = i; j < n ; j++){
            if (arr[j] < arr[min]){
                cout<<"\n Minimum element found at "<<j<<" position which is "<<arr[j]<<" "<<arr[min]<<min;
                min = j;
            }
        }
            //  Now swapping the elements
            cout<<" \n Now swapping "<<arr[i]<<" with "<<arr[min]<<"\n";
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            // int temp = arr[min];
            // arr[min] = arr[i];
            // arr[i] = temp;
    }

}

int main(){
    int n;
    cout<<"Enter the size of an array you will give : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    cout<<"\n Entered array is : ";
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";

    selection_sort(arr,n);

    cout<<"\n Sorted array is : ";
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
    return 0;


}