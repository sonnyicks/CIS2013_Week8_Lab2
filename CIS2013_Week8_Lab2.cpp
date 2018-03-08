#include <iostream>
using namespace std;

int main (){
	
	int number[10];
	
	for(int i=0; i<10; i++){
		cout << "Enter number " << i << ":";
		cin >> number[i];
	}
	
	int total = 0;
	
	for (int i=0; i<10; i++){
		total = total + number[i];
	}
	cout <<"Our total is: " << total << endl;
	cout << "Our average is: " <<total / 10 << endl;
}