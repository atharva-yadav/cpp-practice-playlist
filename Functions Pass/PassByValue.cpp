/*  🔵 Pass by Value 🔵

⭕ Copies the actual value into funct parameters 
⭕ Dont affect original

*/
#include<iostream>
using namespace std;

void passByValue(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){

    int a = 10;
    int b = 20;

    cout <<"Before Swapping a = "<<a<<" b = "<<b<<endl;
    passByValue(a,b);   //Function call
    cout <<"After Swapping a = "<<a<<" b = "<<b<<endl;

    // The values are copied into function values scope is upto that funct
    

    return 0;
}