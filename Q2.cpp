/*2. Write a program that takes two or more sets as input and produces their
Cartesian product as output.*/
#include<iostream>
using namespace std;

int main(){
	int A[]={3,4};
	int B[]={5,6};
	cout<<"The cartesian product of (A x B):"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"("<<A[i]<<","<<B[j]<<")";
		}
	}
return 0;
}
