#include <iostream>

using namespace std;

int main() {
    cout<<" \t ******************* WEEK DAYS ******************* \n \n "<<endl;

    cout<<"hello and welcome to this simple skill testing program"<<endl;

    int days;

    cout<<"Enter a number between 1 - 7 to know its correspondent in Days of the week :) "<<endl;
    cin>>days;

    switch (days) {

        case 1:
            cout<<"monday "<<endl;
            break;
        case 2:
            cout<<"tuesday "<<endl;
            break;
        case 3:
            cout<<"Wednesday "<<endl;
            break;
        case 4:
            cout<<"Thursady "<<endl;
            break;
        case 5:
            cout<<"Friday "<<endl;
            break;
        case 6:
            cout<<"Saturday "<<endl;
            break;
        case 7:
            cout<<"Sunday "<<endl;
            break;

        default:
            cout << "Please Enter a valid day within the range 1 through 7 : Thank-u :" << endl;
    }


    return 0;
}
