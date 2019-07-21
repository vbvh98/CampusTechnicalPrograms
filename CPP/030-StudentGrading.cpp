#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter marks: ";
	cin >> n;
	string grade = "FIRST";
	
	if(n<60 && n>50) grade = "SECOND";
	else if (n<=50 && n>40) grade = "THIRD";
	else if(n<40 ) grade = "FAILED";
	
	cout << grade;
	
	return 0;
}
