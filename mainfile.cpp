//============================================================================
// Name        : mainfile.cpp
// Author      : ADESOLA SAMUEL
// Version     : 1
// Created on: Apr 11, 2020 	// ENDS ON Apr 15, 2020
// Copyright   : Your copyright notice
// Description : Program to calculate CGPA using ATBU Standards.
//============================================================================

#include <iostream>
#include <fstream>
#include "Mainclass.h"
using namespace std;

void pleasantries();

int main() {


//(i have completed the function to get the current result remaining the function to calculate the current gp)

	pleasantries();


	cout << "DO YOOU HAVE A PREVIOUS GPA/CGPA? (Y/N) > ";
	char reply1;
	cin >> reply1;

	if(reply1 == 'y'){

		previous obj;
		obj.getCourse_previous();

	}
	else if (reply1 == 'n'){

		current obj;
		obj.getCourse();

	}
	else{
		cout << "PLEASE ENTER THE RIGHT REPLY \n\n";
	}

	string end;
	cout << "\n\n\nENTER 'OK' TO CLOSE \n";
	cin >> end;

}




void pleasantries(){

	// variables declarations

	string name, level, regnum;

	//ofstream mydata1 ("cgpaData1.txt");
	cout << "WELCOME TO ATBU CGPA CALCULATOR \n\n" << "PLEASE FILL IN THE FOLLOWING DETAILS: \n";
	cout << "NAME > " ;
	cin >> name;
	//mydata1 << "NAME : " << name <<endl;

	cout << "REGISTRATION NUMBER > ";
	cin >> regnum;
	//mydata1 << "REGISTRATION NUMBER : " << regnum <<endl;

	cout << "LEVEL > ";
	cin >> level;
	//mydata1 << "LEVEL : " << level <<endl;

//mydata1.close();
}


