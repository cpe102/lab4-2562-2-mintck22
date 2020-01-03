#include <iostream>
#include <string>
using namespace std;

void printString1(string s, int N){
	int count = 0;
	while(count < N){
		cout << s;
		count++;
	}
}

void printString2(string s1, string s2, int N){
	int count = 0;
	while(count < N){
		if(count%2 == 0){
			cout << s1;
		}else{
			cout << s2;
		}
		count++;
	}
}


int main()
{
	int count = 0;
	while(count < 10){
		
		string s1 = "6";
		string s2 = "9";
		string s = "5";
		int N = 9;
		
		printString1(s,9-count);
		
		printString2(s1,s2,count);
		cout << endl ;
		
		count++;
	}
    return 0;
}
