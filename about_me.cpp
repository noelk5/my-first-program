#include <iostream>

using namespace std;
int main () {
//=====================
//VARIABLE DECLARATIONS
//These are the storage boxes where we keep useranswers
//=====================
string name;           //stores the user's name (text)
string course;         //stores the course (BBIT or BCS)
string hobby;          //stores the hobby
string reason;         //stores why they chose the course
string expectation;    //stores what they expect to learn
string definition;     //stores their definition of programming
string favoritemeal;  // stores the user's favorite meal


//=====================
//QUESTION 1: NAME
//=====================

cout <<"=====================" <<endl;
cout <<" WELCOME TO YOUR FIRST PROGRAM!"   <<endl;
cout <<"=====================" <<endl;
cout <<endl;

cout <<"1.What is your name?";
getline(cin, name); //Read the full line (including spaces)

//=====================
//QUESTION 2: COURSE (BBIT or BCS)
//=====================
cout <<"2.What course are you doing? (BBIT or BCS)";
getline(cin, course);

//=====================
//QUESTION 3:HOBBY
//=====================
cout <<"What is your hobby?";
getline(cin, hobby);

//=====================
//QUESTION 4:REASON FOR CHOOSING THE COURSE
//=====================
cout <<"4.Why did you choose this course? ";
getline(cin, reason);

//=====================
//QUESTION 5:EXPECTATIONS
//=====================
cout <<"5.What do you expect to learn in programming? ";
getline(cin, expectation);

//=====================
//QUESTION 6:DEFINITION OF PROGRAMMING
//=====================
cout <<"6.In your own words what is programming?";
getline(cin, definition);

//======================
//QUESTION 7: FAVORITE MEAL
//======================
cout <<"7.What is your favorite meal?";
getline(cin, favoritemeal);

//=====================
//DISPLAY THE SUMMARY
//=====================
cout << endl;
cout << "========================================" << endl;
cout << " YOUR PROFILE SUMMARY" << endl;
cout << "========================================" << endl;
cout << endl;

cout << "Name: " << name << endl;
cout << "Course: " << course << endl;
cout << "Hobby: " << hobby << endl;
cout << "Reason: " << reason << endl;
cout << "Expectation: " << expectation << endl;
cout << "Programming is: " << definition << endl;
cout << endl;


cout << "========================================" << endl;
cout << " Thank you for completing this!" << endl;
cout << "========================================" << endl;

return 0;
}