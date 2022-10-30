// Euclid algo to find GCD/HCF (Highest common factor)
/*
    24 = 2 * 2 * 2 * 3
    42 = 2 * 3 * 7

    gcd = 2*3 = 6


--> Basic Euclidean Algorithm for GCD
The algorithm is based on below facts.

If we subtract smaller number from larger (we reduce larger number), GCD doesn’t change. 
So if we keep subtracting repeatedly the larger of two, we end up with GCD.
Now instead of subtraction, if we divide smaller number, the algorithm stops when we find remainder 0.
*/

#include<iostream>
using namespace std;

int gcd(int a, int b){

    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;

    }
    return a;
}

/*
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
*/

int main(){
    
    int a, b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
    return 0;
}