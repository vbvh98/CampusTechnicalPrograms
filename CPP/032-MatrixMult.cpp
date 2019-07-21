#include <iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout << "Enter order of Matrix 1: ";
	cin >> a >>b;
	
	cout << "Enter order of Matrix 2: ";
	cin >> c >> d;
	
	if(b!=c){
		cout << "Multiplication not possible!";
		return 0;
	}
	
	int A[a][b], B[c][d];
	
	cout << "Enter elements for Matrix 1: \n";
	
	for(int i=0; i<a; ++i) for(int j=0; j<b; ++j) cin >> A[i][j];
	
	cout << "Enter elements for Matrix 2: \n";
	for(int i=0; i<c; ++i) for(int j=0; j<d; ++j) cin >> B[i][j];

	int C[a][d];
	
	for (int i = 0; i < a; ++i) { 
        for (int j = 0; j < d; ++j) { 
            C[i][j] = 0; 
            for (int k = 0; k < b; ++k) { 
                C[i][j] += A[i][k] * B[k][j];
            } 
        } 
    }
	
	for (int i = 0; i < a; ++i) { 
		cout << "[ \t";
        for (int j = 0; j < d; ++j) { 
            	cout << C[i][j] << "\t";
            }
        cout << " ]" << endl;
    } 
    
	
	
	return 0;
}
