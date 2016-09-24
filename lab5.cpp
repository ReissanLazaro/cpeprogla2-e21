#include <iostream>
#include <iomanip>
using namespace std;
int x, i, j, tPrice;
char ans, p;
float grade;
void problem1();
void problem2();
void problem3();
int choice(int x);

void problem1(){
struct Name{
       char fullName[100];
};
struct Student{
       int id;
       Name name;
       double quiz[3]; 
       double sum;
	   double average;      
};
void newLine();
    Student stud;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullName << endl;
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": " << stud.quiz[i] << endl;       
            stud.sum+=stud.quiz[i];
            stud.average=stud.sum/3;
    }
    cout<< "Grades: " << stud.average;
    
    if (stud.average >= 75)
    {
    	cout << " \nRemarks: Passed\n";
	}
	else
	{
		cout << " \nRemarks: Failed..... Better luck next term!\n";
	}
	system("pause");

}

void problem2(){
	struct Srecord{
	int id;
	char name[30];
	struct Quizzes{
		float quiz;
	};
 Quizzes quizzes[3];
};

void newLine();

	Srecord ci[5];
	cout << "Enter 5 Student<s> Record" << endl;
	for (i=0; i<5; i++){
		cout << "\nStudent " << (i+1)<<endl;
		cout << "ID number: ";
		cin >> ci[i].id;
		newLine();
		cout << "Name: ";
		cin.getline(ci[i].name, 49);
		cout << "Enter 3 quizze(s): ";
		for(j=0; j<3; j++){	
			cin>>ci[i].quizzes[j].quiz;	
		}
}
	cout << setw(5) << "No.";
	cout << setw(15) << "Student No"; 
	cout << setw(20) << "Name"; 
	cout << setw(10) << "Grade";
	cout << setw(10) << "Remark";
	
	for(int i=0; i<5; i++){
		grade = 0;
		for(j=0; j<3; j++){
		         grade+=ci[i].quizzes[j].quiz;
	          	}
		cout << endl;
		cout << setw(5) << i+1;
		cout << setw(15) << ci[i].id;
		cout << setw(20) << ci[i].name;
		cout << setw(10) << setprecision(4) << grade/3 << setw(10);
		if(grade/3>=75 && grade/3<=100){
			cout << "Passed";
			}
			else{
			cout << "Failed";
			}
		}
		cout << endl;
		system("pause");
}

void problem3(){
	struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	double contNo;
};

void newLine();
	Customer c[3];
	for (i=0; i<3; i++){
		cout << "CUSTOMER INFORMATION " << i+1 << endl;
		cin.ignore();
		cout << "First Name: ";
		cin.getline(c[i].name.firstName,29);
		cout << "Last Name: ";
		cin.getline(c[i].name.lastName,29);
		cout << "ORDER DATE: " << endl;
		cout << "Day: ";
		cin >> c[i].order.day;
		cout << "Month: ";
		cin >> c[i].order.month;
		cout << "Year: ";
		cin >> c[i].order.year;
		cout << "\nENTER 3 ITEMS: " << endl;
		for (j=0; j<3; j++){
		    cout << "ID: ";
		    cin >> c[i].order.item[j].ID;
		    newLine();
    	    cout << "Name: ";
    		cin.getline(c[i].order.item[j].itemName,29);
    		cout << "Price: ";
    		cin >> c[i].order.item[j].Price;
    		cout << "Quantity: ";
    		cin >> c[i].order.quan;
    		cout << endl;
		}
		newLine();
}
	j = 0;
	cout << "SUMMARY REPORT"<<endl;
	cout << " #" << setw(30) << "Customer Name" << setw(20) << "Order Date";
	cout << setw(15) << "Items";
    cout << setw(15) << "Price";
	cout << setw(15) << "Quantity" << endl;
	
	for (i=0;i<3;i++){
		tPrice=0;
		cout <<" " << i+1 <<setw(23)<<c[i].name.lastName<<",";
		cout << setw(6) << c[i].name.firstName ;
        cout << setw(11) << c[i].order.day << "/" << c[i].order.month<<"/" << c[i].order.year << endl;
		
    	for (j=0;j<3;j++){
    		cout << setw(67)<<c[i].order.item[j].itemName <<setw(15)<<c[i].order.item[j].Price;
			cout << setw(15)<<c[i].order.quan<<endl;
    		tPrice += c[i].order.item[j].Price;
		}
		tPrice=tPrice*c[i].order.quan;
		cout << setw(96) << "TOTAL PRICE: " << tPrice<<endl;
	}
	system("pause");
}

void newLine(){
     char s;
     do{cin.get(s);}
     while(s!='\n');     
}
int choice(int x) {
cout << "Problems\n" << "1. Student's Grade \n2. Student's Quiz\n3. Customer's Information\n" << endl;
cout << "Choose a problem number to solve [1-3]: ";
cin >> x;
switch(x) {
          case 1:
          problem1();
          break;
          case 2:
          problem2();
          break;
          case 3:
          problem3();
          break;
          break;
          default: cout <<"\nInvalid Input!\n";
          break;
          }
      return x;
      }
main()
{
	choice(x);
}
