#include "functions.h"

// Make some more changes in the factorial.cpp file
int factorial(int n){
    while(n<0) {
        cout << "Please enter a positive number: ";
        cin >> n;
        cout << endl;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
