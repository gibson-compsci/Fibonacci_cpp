/* 
 * File:   fibonacci.cpp
 * Author: Cam Gibson
 *
 * Created on October 14, 2014, 8:38 PM
 */

#include <iostream>

using std::cout; using std::endl; using std::cin;

int fib(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}

/*
 * 
 */
int main() {
    int term;
    cout<<"Please enter a term number: ";
    cin>>term;
    cout<<fib(term)<<endl;
    return term;
}
