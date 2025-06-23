#include<iostream>
using namespace std;

int main(){
	int A[10],B[10],n1,n2;
	cout<<"Enter the no.of elements of A: ";
	cin>>n1;
	cout<<"Enter the elements of A: "<<endl;
	for(int i=0;i<n1;i++){
		cin>>A[i];
	}
	cout<<"Enter the no.of elemets of B: ";
	cin>>n2;
	cout<<"Enter the elements of B:"<<endl;
	for(int i=0;i<n2;i++){
		cin>>B[i];
	}

    // Union
    cout << "\nUnion: ";
    for (int i = 0; i < n1; i++) {
        cout << A[i] << " ";
    }
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (B[i] == A[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << B[i] << " ";
        }
    }

    // Intersection
    cout << "\nIntersection: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                cout << A[i] << " ";
                break;
            }
        }
    }

    // Difference A - B
    cout << "\nDifference (A - B): ";
    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << A[i] << " ";
        }
    }

    // Symmetric Difference
    cout << "\nSymmetric Difference: ";
    // A - B
    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << A[i] << " ";
        }
    }
    // B - A
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (B[i] == A[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << B[i] << " ";
        }
    }

    cout << endl;
    return 0;
}


