#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i=1;i<N;i++){
		int key=i;
		for(int K=0;K<N;K++){
			if(K==key) cout<<"[";
			cout<<d[K];
			if(K==key) cout<<"]";
			cout<<" ";
		}
		cout<<"=> ";
		for(int x=i-1;x>=0;x--){
			if(d[key]>d[x]){
			swap(d,key,x);
			key=x;
			}

		}
		for(int K=0;K<N;K++){
			if(K==key) cout<<"[";
			cout<<d[K];
			if(K==key) cout<<"]";
			cout<<" ";
		}
		cout<<"\n";
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
