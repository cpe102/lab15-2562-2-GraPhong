#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *dPtr,int N,int M){
	int k=0;
	for(int i=0; i<N; i++){
		for(int j = 0; j<M; j++){
			*(dPtr+k) = rand()%101 * 0.01;
			k++;
		}
	}
}

void findColSum(const double *dPtr,double *result,int N,int M){
	int k=0;
	for(int i=0; i<M; i++){
		for(int j = 0; j<N; j++){
			*(result+j) += *(dPtr+k);
		k++;	
		}

	}
}

void showData(double *dPtr,int N,int M){
	int k=0;
	for(int i=0; i<N; i++){
		for(int j = 0; j<M; j++){
			cout << *(dPtr+k) <<" ";
			k++;
		}
		cout << "\n";
	}
}