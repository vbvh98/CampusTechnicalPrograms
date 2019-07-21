#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter number: ";
	cin >> n;
	int digits = 0, sum=0,temp = n;
	
	while(temp){
		temp/=10;
		digits++;
	}
	while(digits--){
		sum+= n%10;
		n/=10;
	}	
	
	cout << "Sum of digits is: " << sum;
	return 0;
}
