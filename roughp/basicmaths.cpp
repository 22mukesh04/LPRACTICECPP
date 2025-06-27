#include<iostream>
using namespace std;

/* 
       Problem 1 
Number of digits 
Problem statement 
:: Given the numbe 'n', find out and return the number of digits present in a number.
if  input = 156 , output = 3
Solution ::
int count(int n) {
    if (n == 0) return 1;
    n = abs(n); // Handle negative numbers
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

*/
// int count(int n){
//                     int cnt = 0;
//                     if(n == 0) return 1;
//                     n = abs(n);
//                     while (n > 0) {
//                                    cnt++;
//                                    n /= 10;
//                                   }
//                     return cnt;
// }
// int main(){
        //   cout<<"Hello\n";
        //   int n;
        //    cout<<"Enter a number \n";
        //    cin>>n;
        //    cout<<"Entered number is : "<<n<<"\n";
        //    cout<<"Total number :: "<<count(n);
//  }

/*
              Problem 2
              Problem Statement
    Write a program to generate the reverse of a given number N.
    Print the corresponding reverse number.
*/

int revn(int n){
                int signn = ( n < 0 ) ? -1 : 1 ; 
                n = abs(n);
                int revnum = 0;
                while( n > 0) { 
                                revnum = revnum*10 + n%10;
                                n /= 10;
                              }
                return revnum * signn ;
} 

int main(){ 
           cout<<"Hello\n";
           int n;
           cout<<"Enter a number : ";
           cin>>n;
           cout<<"Entered number is : "<<n<<"\n";
           cout<<"Reverse number :: "<<revn(n);
            
}



