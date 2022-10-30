// Print numbers in acceding and decending order

#include<iostream>
using namespace std;

void dec(int n){

    if(n==0){                       // Base Condition
        return;
    }

    cout << n <<endl;
    dec(n-1);
}

void inc(int n){

    if(n==0){                       // Base Condition
        return;
    }

    inc(n-1);
    cout<<n<<endl;
}

int main(){
    
    int n;
    cin>>n;
    dec(n);
    cout <<endl;
    inc(n);
    return 0;
}