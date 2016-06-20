#include<iostream>
#include<conio.h>

using namespace std;

void Nhap(int A[], int n){
	for(int i=1;i<=n;i++){
		cout<<"Nhap phan tu thu A["<<i<<"]"<<endl;
		cin>>A[i];
	}
}

void In(int A[], int n){
	for(int i=1;i<=n;i++){
		cout<<A[i]<<"\t";
	}
}

void Max(int A[], int n){
	int max=A[1];
	for(int i=1; i<=n;i++){
		if(A[i]>max)
			max=A[i];			
		}	
		cout<<max;
}

void Swap(int &a, int &b){
	int c;
	c=a;
	a=b;
	b=c;
}

void SapXep(int A[], int n){
	for(int i=0;i<n;i++){
		for(int j=n;j>i;j--){
			if(A[j]>A[j-1])
			 	Swap(A[j-1],A[j]);
		}
	}
}
int Count(int A[],int n,int x){
	int dem=0;
	for(int i=1;i<=n;i++)
		if(A[i]==x)
			dem++;
			return dem;
}
void MaxCount(int A[],int n){
	int j=A[0];
	int dem= Count(A,n,j); 
	for(int i=1;i<=n;i++){
		if(dem<Count(A,n,A[i])){
			dem=Count(A,n,A[i]);
			j=A[i];
		}
	}
	cout<<endl<<"Most Freq: "<<j<<endl<<"Freq: "<<dem;
}

int main(){
	int A[100],n;
	cout<<"Nhap so phan tu cua mang: "; cin>>n;
	Nhap(A,n);
	cout<<endl<<"mang vua nhap: ";In(A,n);
	cout<<endl<<"So lon nhat la: ";Max(A,n);
	SapXep(A,n);
	cout<<endl<<"Mang vua sap xep: "; In(A,n);
	MaxCount(A,n);
}

