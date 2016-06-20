#include<iostream>
#include<fstream>
using namespace std;
float A[10],B[10],n;
void Write(){
	fstream f;
	f.open("number.txt", ios::out);
	for(int i=1;i<=n;i++){
		f<<A[i]<<" ";
		
	}
	f.close();
}

void Read(){
	fstream f("number.txt", ios::in);
	if(!f.is_open())
	cout<<"Ko mo dc file";
	else {
		for(int i=1; i<=n;i++)
	     f>>B[i];
		}
		f.close();
}
void sumSquare(){
	float sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+B[i]*B[i];
	}
	cout<<"Sum square = "<<sum;
}
int main(){
	cout<<"Input n: ";
	cin>>n;
	cout<<"Input array:";
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	Write();
    Read();
	sumSquare();
}
