/*4. Write a program that takes name and age of a 5 persons as an input and
gives the degree of membership of the person as its output according to
following membership functions.
a. Degree of membership = 1 if age<=20
Degree of membership = (30-age)/10 if age>20 and age<=30
Degree of membership = 0 if age>30
b. Degree of membership = 1 if age<=15
Degree of membership = (35-age)/20 if age>15 and age<=35
Degree of membership = 0 if age>35
Perform set operations according to rules of fuzzy sets, on these
two sets.*/
#include<iostream>
using namespace std;

class Person{
	public:
		string name;
		int age;
		float A,B,unionAB,intersectionAB;
		float complementA,complementB;
		
		void getdata(){
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Age:";
			cin>>age;
		}
		void membership(){
			//for membership A
		if (age <= 20) {
            A = 1.0;
        } else if (age > 20 && age <= 30) {
            A = (30.0 - age) / 10.0;
        } else {
            A = 0.0;
        }
        //for membership B
         if (age <= 15) {
            B = 1.0;
        } else if (age > 15 && age <= 35) {
            B = (35.0 - age) / 20.0;
        } else {
            B = 0.0;
        }
        //union
        unionAB=(A>B)?A:B;
        //Intersection
        intersectionAB=(A<B)?A:B;
        //complements
        complementA=1.0-A;
        complementB=1.0-B;
}
        
        void display(){
        	cout<<name<<"\t"
        	    <<age<<"\t"
        	    <<A<<"\t"
        	    <<B<<"\t"
        	    <<unionAB<<"\t"
        	    <<intersectionAB<<"\t"
        	    <<complementA<<"\t"
        	    <<complementB<<"\n";
		}
};
int main(){
	Person p[5];
	for(int i=0;i<5;i++){
		p[i].getdata();
		p[i].membership();
	}
	cout<<"Name\tAge\tA\tB\tAUB\tAnB\t~A\t~B\n";
	for(int i=0;i<5;i++){
		p[i].display();
	}
return 0;
}
