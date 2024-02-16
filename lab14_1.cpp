#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){}

void sw(int w[],int x,int y)	{
	double Z = w[x];
	w[x]=w[y];
	w[y]=Z;} //swap name 1 2

void LL(int b[],int g)	{
	int j;
	for(j=0;j<g;j++)	{ 
		if(b[j]<b[j+1]) sw(b,j,j+1);
			for(j=0;j>0;j--)	{
				if(b[j]<b[j+1]) sw(b,j,j+1);	}

		for(int i = 0; i < 10; i++) cout << b[i] << " ";
		cout << "\n";	}	}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	LL (a,9);
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

//for(int i = 0; i < 10; i++) 