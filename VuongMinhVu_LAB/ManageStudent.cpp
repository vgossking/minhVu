#include<iostream>
#include<algorithm>
#include<conio.h>

using namespace std;
struct Class{
	string classname;
	string year;
};
struct Student{
	int id;
	string name;
	string age;
	Class cl;
};
struct Subject{
	float testMark1;
	float testMark2;
	float examMark1;
	float examMark2;
	float sum;
};
void showMenu(){
	fflush(stdin);
	cout<<"\tMenu:"<<endl;
	cout<<"\t1.To input student info"<<endl;
	cout<<"\t2.To input mark of student"<<endl;
	cout<<"\t3.To output results of 1 student"<<endl;
	cout<<"\t4.To output results of 1 class"<<endl;
	cout<<"\t5.Break"<<endl;
	cout<<"Your choice is: ";	
}
Student students[20];
Subject Math[20], Physics[20], Chemistry[20];
void inputStudentInfo(int n){
	cout<<"Nhap so sinh vien can nhap: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Student "<<i+1<<":"<<endl;
		students[i].id=i+1;
		cout<<"Name: ";cin>>students[i].name;
		cout<<"Age: ";cin>>students[i].age;
		cout<<"Class Name: ";cin>>students[i].cl.classname;
		cout<<"Year: ";cin>>students[i].cl.year;
		cout<<endl;
	}
}
void inputMarkOfStudent(int n){
	for(int i=0;i<n;i++){
		cout<<"Mark Of Student "<<i+1<<":"<<endl;
		cout<<"Math:";
		cin>>Math[i].testMark1>>Math[i].testMark2>>Math[i].examMark1>>Math[i].examMark2;
		Math[i].sum=Math[i].testMark1+Math[i].testMark2+Math[i].examMark1+Math[i].examMark2;
		cout<<"Physics:";
		cin>>Physics[i].testMark1>>Physics[i].testMark2>>Physics[i].examMark1>>Physics[i].examMark2;
		Physics[i].sum=Physics[i].testMark1+Physics[i].testMark2+Physics[i].examMark1+Physics[i].examMark2;
		cout<<"Chemistry:";
		cin>>Chemistry[i].testMark1>>Chemistry[i].testMark2>>Chemistry[i].examMark1>>Chemistry[i].examMark2;
	    Chemistry[i].sum=Chemistry[i].testMark1+Chemistry[i].testMark2+Chemistry[i].examMark1+Chemistry[i].examMark2;
	}
}
void outputResultOfStd(){
	cout<<"Input id:";
	int id;
	cin>>id;
	for(int i=0;i<2;i++){
		if(students[i].id==id){
			cout<<"Math:"<<endl;
		    cout<<Math[i].testMark1<<" "<<Math[i].testMark2<<" "<<Math[i].examMark1<<" "<<Math[i].examMark2<<" sum:"<<Math[i].sum<<endl;
		    cout<<"Physic:"<<endl;
		    cout<<Physics[i].testMark1<<" "<<Physics[i].testMark2<<" "<<Physics[i].examMark1<<" "<<Physics[i].examMark2<<" sum:"<<Physics[i].sum<<endl;
		    cout<<"Chemistry:"<<endl;
		    cout<<Chemistry[i].testMark1<<" "<<Chemistry[i].testMark2<<" "<<Chemistry[i].examMark1<<" "<<Chemistry[i].examMark2<<" sum:"<<Chemistry[i].sum<<endl;
		    cout<<endl;
		    break;
		}
	}
}
void outputResultOfClass(){
	cout<<"Input Class Name:";
	string name,year;
	cin>>name;
	cout<<"Input Class Year:";
	cin>>year;
	Class x;
	x.classname=name;
	x.year=year;
	cout<<"Result Of class "<<x.classname<<endl;
	for(int i=0;i<2;i++){
		if(students[i].cl.classname==x.classname&&students[i].cl.year==x.year){
			cout<<students[i].name<<endl;
			cout<<"Math:"<<endl;
		    cout<<Math[i].testMark1<<" "<<Math[i].testMark2<<" "<<Math[i].examMark1<<" "<<Math[i].examMark2<<" sum:"<<Math[i].sum<<endl;
		    cout<<"Physic:"<<endl;
		    cout<<Physics[i].testMark1<<" "<<Physics[i].testMark2<<" "<<Physics[i].examMark1<<" "<<Physics[i].examMark2<<" sum:"<<Physics[i].sum<<endl;
		    cout<<"Chemistry:"<<endl;
		    cout<<Chemistry[i].testMark1<<" "<<Chemistry[i].testMark2<<" "<<Chemistry[i].examMark1<<" "<<Chemistry[i].examMark2<<" sum:"<<Chemistry[i].sum<<endl;
		    cout<<endl;
		}
	}
}
main(){
	int choice;
	showMenu();
	cin>>choice;
	while(1){
		if(choice==5){
			break;
		}
		else{
            switch(choice){
            	int n;
        	    case 1: inputStudentInfo(n);break;
        	    case 2: inputMarkOfStudent(n);break;
        	    case 3:outputResultOfStd();break;
        	    case 4: outputResultOfClass();break;
		    }
		}	
        showMenu();cin>>choice;
	}
}
