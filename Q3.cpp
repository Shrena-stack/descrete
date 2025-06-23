/*3. Write a program that takes a real number and produces is ceiling and floor
integers as output.*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float num;
	cout<<"Enter the real number: ";
	cin>>num;
	cout<<"Ceiling: "<<ceil(num)<<endl;
	cout<<"Floor: "<<floor(num)<<endl;
return 0;
}
