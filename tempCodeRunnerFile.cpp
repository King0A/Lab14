#include <iostream>
using namespace std;

void sw(int w[],int x,int y)	{
	double Z = w[x];
	w[x]=w[y];
	w[y]=Z;} //swap name 1 2

 void LLL(int a[],int x){
    int j;
    for(j=0;j<x;j++){
        if(j<j+1) {sw (a,j,j+1);}
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n";}
 }


 int main() {
    int a[10] = {12,25,30,44,2,0,4,7,55,25};
    LLL(a,9);
 }

