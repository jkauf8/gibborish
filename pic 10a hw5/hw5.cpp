/* PIC 10A 2A, Homework 5
Purpose: three integer functions
Author: Justin Kaufman
Date: 11/15/2020
*/

#include <iostream>

using namespace std;

void displayMenu(){
    
    cout<<"===========MENU==========="<<endl;
    cout<<"1. Output the largest"<<endl;
    cout<<"2. Get the next permutation"<<endl;
    cout<<"3. Sort in ascending order"<<endl;
    
}

int largest(int a, int b, int c){
    int big = 0;
    if (a > big) {
        big = a;
    }
    if (b > big) {
        big = b;
    }
    if (c > big) {
        big = c;
    }
    return big;
}

void mySort(int& a, int& b, int& c){
    int holdA, holdB, holdC;
    if(a<c&& c<b){
        holdC = c;
        c=b;
        b=holdC;
    }
    else if(c<b && b<a){
        holdA=a;
        a=c;
        c=holdA;
    }
    else if(c<a && a<b){
        holdB=b;
        b=a;
        a=c;
        c=holdB;
    }
    else if(b<a && a<c){
        holdB=b;
        b=a;
        a=holdB;
    }
    else if(b<c && c<a){
        holdA=a;
        a=b;
        b=c;
        c=holdA;
    }
}

void myPermutation(int& a, int& b, int& c){
    int holdB, holdC;
    holdB = b;
    holdC = c;
    b = a;
    c = holdB;
    a = holdC;
}

int main(int argc, const char * argv[]) {
    int num1, num2, num3;
    char choice;
    cout<<"Enter your three integer numbers: "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    while(true){
        displayMenu();
        cout<<"Enter your choice (1-3), Q to quit: ";
        cin >> choice;
        cout<<endl;
        if(choice == 'Q' || choice == 'q'){
            cout<<"Exit the menu"<<endl;
            break;
        }
        else if(choice=='1'){
            cout << "The largest number among the three is: " << largest(num1, num2, num3) <<endl;
            cout<<endl;
        }
        else if(choice=='2'){
            myPermutation(num1, num2, num3);
            cout<< "After one permutation: " <<num1 <<" "<<num2 << " " <<num3 <<endl;
            cout<<endl;
        }
        else if(choice=='3'){
            mySort(num1, num2, num3);
            cout << "After sorting: " <<(num1) << " " <<(num2) << " " <<(num3) << endl;
            cout<<endl;
        }
    }
    return 0;
}
