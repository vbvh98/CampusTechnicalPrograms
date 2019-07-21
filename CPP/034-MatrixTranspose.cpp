#include <iostream>
using namespace std;

int * transpose(int A[][], int a, int b){
	
}

int main(){
	int a,b,c,d;
	cout << "Enter order of Matrix: ";
	cin >> a >>b;
	
	int A[a][b];
	
	cout << "Enter elements for Matrix: \n";
	
	for(int i=0; i<a; ++i) for(int j=0; j<b; ++j) cin >> A[i][j];
	
	int matrix = transpose(A, a,b)
	
	return 0;
}
