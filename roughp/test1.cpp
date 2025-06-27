#include<iostream>
using namespace std;

int main(){
		int num;
		cout<<"Enter a number : ";
		cin>>num;
		cout<<"Entered number is : "<<num<<endl;
		int sum = 0 , prod = 1;
        if (num < 0 ){
                        num *= -1;
        }
		while(num > 0 ){
                prod *= num%10;
				sum += num%10;
				num /= 10; 	
 		}
		cout<<"Sum of the number is : "<<sum;
        cout<<"\n Product of the number is : "<<prod;

}


// def sum(num):
// 	sum = 0
// 	while ( num > 0 ):
// 			sum += num%10
// 			num //=10
// print(