/*
 * Mainclass.cpp
 * of CGPA CALCULATOR
 *
 *  Created on: Apr 11, 2020  // ENDS ON Apr 15, 2020
 *      Author: ADESOLA SAMUEL
 */

#include "Mainclass.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// global variables
int numOfCourses;





current::current(){
	cout << "\n\nHOW MANY COURSES DO YOU OFFER THIS SEMESTER? > ";

		cin >> numOfCourses;

	cout << "PLEASE ENTER THE COURSE CODE AND THEIR CORRESPONDING UNIT \n\n";
	cout << "COURSE CODE" << setw(10) << "UNIT" <<endl;
}



void current::getCourse(){

	//array variables to get course code and unit
		int arr1;

	//	ofstream mydata2 ("cgpaData2.txt");

	string courseCode[numOfCourses];
	int courseUnit[numOfCourses];

	for(arr1=0; arr1<numOfCourses; arr1++){

	cin >> courseCode[arr1];
	//mydata2 << courseCode[arr1];
	cout << setw(10);
	cin >> courseUnit[arr1];
	//mydata2 << courseUnit[arr1];
	}

	cout << "\n\nFROM THE RELATION BELLOW, CHOOSE A NUMBER CURRESPONDING TO YOUR GRADE \n"
	<< "A = 5    B = 4    C = 3    D = 2    E = 1    F = 0 \n\n";

	int courseGrade[numOfCourses];
	for(int i = 0; i<numOfCourses; i++){


	cout << "WHAT IS YOUR GRADE IN "<< courseCode[i] << "   ";
	try{
	cin >> courseGrade[i];
		if(courseGrade[i] > 5){
			throw 111;
		}
	}
	catch(int error1){
		cerr << "GRADE NOT CORRECT";

		}
		//mydata2.close();
}


	 int cu = 0;
	 int cp = 0;
	for(int j = 0; j<numOfCourses; j++){
		cu += courseUnit[j];

	}

	for(int k = 0; k<numOfCourses; k++){
		cp += (courseGrade[k] * courseUnit[k]);

		}
	cout << "\n\nRESULTS:\n";
	cout << "CU = " << cu;
	cout << "\nCP = " << cp;

	float gpa;
	gpa = (float)cp/cu;
	cout << "\n\nCURENT GPA =  " << setprecision(3) << gpa;
}

//THIS FUNCTION IS FOR THOSE THAT HAVE A PREVIOUS CGPA. I USED SAME FORMAT EITH THE ABOVE

previous::previous(){
	cout << "\n\nHOW MANY COURSES DO YOU OFFER THIS SEMESTER? > ";

			cin >> numOfCourses;

		cout << "PLEASE ENTER THE COURSE CODE AND THEIR CORRESPONDING UNIT \n\n";
		cout << "COURSE CODE" << setw(10) << "UNIT" <<endl;

}

void previous::getCourse_previous(){

	//array variables to get course code and unit
			int arr1;

		//	ofstream mydata2 ("cgpaData2.txt");

		string courseCode[numOfCourses];
		int courseUnit[numOfCourses];

		for(arr1=0; arr1<numOfCourses; arr1++){

		cin >> courseCode[arr1];
		//mydata2 << courseCode[arr1];
		cout << setw(10);
		cin >> courseUnit[arr1];
		//mydata2 << courseUnit[arr1];
		}

		cout << "\n\nFROM THE RELATION BELLOW, CHOOSE A NUMBER CURRESPONDING TO YOUR GRADE \n"
		<< "A = 5    B = 4    C = 3    D = 2    E = 1    F = 0 \n\n";

		int courseGrade[numOfCourses];
		for(int i = 0; i<numOfCourses; i++){


		cout << "WHAT IS YOUR GRADE IN "<< courseCode[i] << "   ";
		try{
		cin >> courseGrade[i];
			if(courseGrade[i] > 5){
				throw 111;
			}
		}
		catch(int error1){
			cerr << "GRADE NOT CORRECT";

			}
			//mydata2.close();
	}


		 int cu = 0;
		 int cp = 0;
		for(int j = 0; j<numOfCourses; j++){
			cu += courseUnit[j];

		}

		for(int k = 0; k<numOfCourses; k++){
			cp += (courseGrade[k] * courseUnit[k]);

			}

		int f_su;
		int f_sp;

		cout << "\nWHAT IS YOUR FORMAL CU? > ";
		cin >> f_su;
		cout << "\nWHAT IS YOUR FORMAL CP? > ";
		cin >> f_sp;

		int su = 0;
		int sp = 0;

		su += f_su;
		sp += f_sp;


		int suT = cu+su;
		int spT = cp+sp;

		cout << "\n\nRESULTS:\n";
		cout << "SU = " << cu << setw(10) << "CU = " << su;				//I interchange su & cu
		cout << "\nSP = " << cp << setw(10) << "CP = " << sp;			// so take note
		cout << "\nCUMMULATIVE: \n";
		cout << "CU = " << suT << setw(10) << "CP = " << spT;

		float gpa;
		gpa = (float)cp/cu;
		cout << "\n\nCURENT GPA =  " << setprecision(3) << gpa;

		float cgpa;

		cgpa = (float)spT/suT;
		cout << "\nCGPA = " << setprecision(3) << cgpa;
}

