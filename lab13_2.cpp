#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double X[][N]){
	for(int k=0; k<N ;k++){
		cout<<"Row "<<k+1<<": ";
		for(int x =0;x<N;x++){
			cin>>X[k][x];
		}
	}
}

void showMatrix(const bool X[][N]){
	for(int k=0; k<N ;k++){
		for(int x =0;x<N;x++){
			cout<<X[k][x]<<" ";
		}
		cout<<"\n";
	}
}

void findLocalMax(const double a[][N], bool b[][N]){
	for(int k=0; k<N ;k++){
		for(int x =0;x<N;x++){
		b[k][x]=false;
		}
	}
	for(int k=1; k<N-1 ;k++){
		for(int x =1;x<N-1;x++){
			if(a[k][x]>=a[k][x-1]&&a[k][x]>=a[k+1][x]&&a[k][x]>=a[k][x+1]&&a[k][x]>=a[k-1][x]) b[k][x]=true;
		}
	}
}
// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here