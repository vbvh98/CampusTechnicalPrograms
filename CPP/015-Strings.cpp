#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s, s1;
	int pos, n;
	char ch;
	cin >> s;
	
	cout << "1: To insert a sub-string in to given main string from a given position." << endl <<
			"2: To delete n Characters from a given position in a given string." << endl <<
			"3: To replace a character of string either from beginning or ending or at a specified location." << endl;
	
	int choice;	
	cin >> choice;
	
	switch(choice) {
		case 1:
			cout << "Enter Pos: ";
			cin >> pos;
			cout << "Enter new string: ";
			cin >> s1;
			
			s = s.substr(0, pos) + s1 + s.substr(pos, s.length()-1);
			
			break;
		case 2:
			cout << "Enter number of char to delete and Pos: ";
			cin >> n >> pos;
			
			s = s.substr(0, pos) + s.substr(pos+n, s.length()-1);
			
			break;
		case 3:
			cout << "Enter Pos: ";
			cin >> pos;
			cout << "Enter character: ";
			cin >> ch;
			
			if(pos > -1 && pos < s.length())
				s[pos-1] = ch;
			
			break;
	}
	
	cout << s << endl;
	
	return 0;
}
