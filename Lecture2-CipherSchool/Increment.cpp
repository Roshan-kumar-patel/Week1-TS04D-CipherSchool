#include<bits/stdc++.h>
using namespace std;
void increment(int *a){
  (*a)++;
}
int main(){
    int b=10;
    increment(&b);
    cout<<b;
    return 0;
}