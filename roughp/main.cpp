// First problem
// #include<iostream>
// using namespace std;

// int main(){
//     // Pattern problems start
//     // SQUARE PATTERN
    
//     //         For n=3
//     // 123
//     // 123
//     // 123
//     //         For n=4
//     // 1234
//     // 1234
//     // 1234
//     // 1234
//     // Outer loop will be printed n times 
//     // Inner loop will tell what will be single row look like
//     int n ;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for( int i=0;i<n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }

//  ******** SECOND PROBLEM **********
//  To print n*n star pattern
//  if user enter n = 4
//  * * * *
//  * * * *
//  * * * *
//  * * * *
// #include<iostream>
// using namespace std;

// int main() {
//     int ns;
//     cout<<"Enter a number : ";
//     cin>>ns;
//     for(int i=0; i<ns;i++){
//         for(int j=1;j<=ns;j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }

// }

//  ********** PROBLEM 3 ***********

//  To print n*n  pattern with Characters A B C D 
//  if user enter n = 4
//  A B C D
//  A B C D
//  A B C D
//  A B C D
#include<iostream>
using namespace std;
 int main(){
    char ch= 65 ;
    int nl;
    cout<<"Enter the value of n : ";
    cin>>nl;
    for(int i=0;i<nl;i++){
        char ch= 65 ;
        for(int j=0;j<nl;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";

    }

 }