/*My name: Nazar Altayeb Osman Alkhalifa
 Class: second
 Department: Computer */
#include <iostream>//importing iostream for input and output system
using namespace std;

int main()//the main function
{
    string name ,department;//defining string variables
    char depart,dgree;//defining char variables
    int  student_id,mark;
    cout << "Enter student name: ";getline(cin,name);//taking an input and store it in name variable
    cout<<"Enter student Id: ";cin>>student_id;
    cout<<"Enter (A) for control or Enter (T) for telcommunation: ";cin>>depart;//taking an input as char and store it in depart variable
    cout<<"Enter student dgree: ";cin>>mark;//taking an input as mark and store it in mark variable
    if(depart =='A'){//if condition to declear if that is student is Telcomunication or control
            department="Control";
    }
    else

        department="Telecomunication";
    switch(mark){ //here switch used for taking deside and specify the dgree of student
        case 50 ... 59 ://this case in range from 50 to 59
            dgree='F';//if the case above is tree store "F" in dgree variable
            break; //break in switch use to prevent entering in second case
        case 60 ... 69 ://this case in range from 60 to 69
            dgree='D';//if the case above is tree store "D" in dgree variable
            break;
        case 70 ... 79 ://this case one in range from to
            dgree='C';//if the case above is tree store "C" in dgree variable
            break;
       case 80 ... 89 ://this case in range from 80 to 89
            dgree='B';//if the case above is tree store "B" in dgree variable
            break;
        case 90 ... 100 ://this case in range from 90 to 100
            dgree='A';//if the case above is tree store "A" in dgree variable
            break;
       default:
          dgree='-gh';

    }
     cout<<"Student name: "<<name<<endl;//this line to print out student name
     cout<<"Student ID: "<<student_id<<endl;//this line to print out student ID
     cout<<"Student degree: "<<dgree<<endl;//this line to print out student dgree
     cout<<"Department: "<<department<<endl;//this line to print out student Department
    return 0;
}
