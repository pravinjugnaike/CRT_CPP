// write a programm to accept three paper marks m1, m2 and m3 and calculate
// total percentage and if student id passed in all the subject then print passelse print fail
// print total, percentage and if percentage is greater than equal to 60 so print "Eligible for placement" else
// not eligible
#include<iostream>
using namespace std;
int main()
{
    int M1, M2, M3;
    int total;
    float percentage;
    cout<<"enter the marks"<<endl;
    cin>>M1>>M2>>M3;
    total= M1 + M2 + M3;
    percentage = total/3.0;
    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
     if (M1 >= 40 && M2 >= 40 && M3 >= 40)
    {
        cout << "Result: PASS" << endl;

        if (percentage >= 60)
            cout << "Eligible for Placement" << endl;
        else
            cout << "Not Eligible for Placement" << endl;
    }
    else
    {
        cout << "Result: FAIL" << endl;
        cout << "Not Eligible for Placement" << endl;
    }

    return 0;
}