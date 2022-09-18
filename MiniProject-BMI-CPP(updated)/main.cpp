#include <iostream>
#include<conio.h>
using namespace std;

//variables
int optUser;
bool ask = true;
bool application = true;
//variables for func system.
double height, height2, totalheight, totalbmi;
int weight;
bool bmiagain = true;


//FunctionList.
void myAbout() {
cout<<endl;
cout<<"The BMI Calculator is made in CodeBlocks using C++ Programming Language.";
cout<<endl;
}

void devAbout() {
cout<<endl;
cout<<"I am Jhon Luke Q. Cutay, created this program in 2nd-year college."<<endl;
cout<<"Contact me through this email: ";
cout<<"jhonlukecutayyy@gmail.com";
cout<<endl;
}

void exprgm () {
    //asking the user if he/she wants to exit the program.
    char yn;

    while (application = true) {
    cout<<"Do you want to exit the program? y/n: ";
    cin>>yn;

    if (yn == 'N' || yn == 'n' ) {
        break;
    }
    if (yn == 'Y' || yn == 'y') {
    exit(application);
    }
}
}

void bmicalc (){
while (bmiagain = true) {

    //asking user's height
    char bmiyn;
    cout<<endl;
    cout<<"The system will now ask for your height (only accept in meters): ";
    cin>>height;

    height2 = height * height;

    //asking user's weight
    cout<<endl;
    cout<<"The system also asks for your weight (only accept in kilograms): ";
    cin>>weight;

    totalbmi = weight / height2;


    cout<<endl;
    cout<<"Your body mass index is: " << totalbmi;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    //measures depends on totalbmi's result.
    if (totalbmi < 18.5) {
        cout<<"Your body measurement level is UNDERWEIGHT."<<endl;
        cout<<endl;
        cout<<"Some people who are underweight find they get sick all the time, or they feel very tired. That may be because they are not getting all the nutrients they need from their diet."<<endl;
        cout<<endl;
    }
    if (totalbmi > 18.6 && totalbmi < 24.9 ) {
        cout<<"Your body measurement level is NORMAL.";
        cout<<endl;
        cout<<"When your body measurement level is NORMAL, you are lessen to have sickness and you'll have a stronger body. Continue to live like this and you'll get the satisfaction of your life."<<endl;
        cout<<endl;
    }
    if (totalbmi > 25 && totalbmi < 29.9) {
        cout<<"Your body measurement level is OVERWEIGHT.";
    }
    if (totalbmi > 30 && totalbmi < 39.9) {
        cout<<"Your body measurement level is OBESE.";
    }
    if (totalbmi > 40) {
        cout<<"Your body measurement level is MORBID OBESITY.";
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Would you like to try again? y/n: ";
    cin>>bmiyn;

    if (bmiyn == 'Y' || bmiyn == 'y' ) {
        bmiagain = true;
    }
    if (bmiyn == 'N' || bmiyn == 'n') {
        cout<<endl;
        cout<<endl;
        cout<<"Thank you for using the program. Always keep your body in good shape. :)";
        cout<<endl;
        cout<<endl;
        exit(bmiagain);



    }

}
}



int main() {
    cout << "Welcome to BMI Calculator!" << endl;

    while (application = true) {
    //program's Menu.
    cout<<endl;
    cout<<endl;
    cout<<"Please input any numbers that are shown below:"<<endl;
    cout<<"1 = Start" << endl << "2 = About"<< endl << "3 = About Me"<< endl << "4 = Exit Program" ;

    cout<<endl;
    cout<<endl;
    //input
    cout<<"Your chosen number is: ";
    cin>>optUser;


    if (optUser == 1) {
        bmicalc();
    }
    if (optUser == 2) {
        myAbout();
        continue;
    }
    if(optUser == 3) {
        devAbout();
        continue;
    }
    if (optUser == 4) {
       exprgm();
        }
    }
    getch();
    return 0;
    }

