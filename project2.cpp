//PROJECT 2 - SIMPLE CALCULATOR

#include<iostream>

using namespace std;

int main(){
    cout<<"\n";
    cout<<"!!_____CALUCULATOR_____!!\n\n";
    float num1,num2;
    int choice;

    cout<<"ENTER THE FIRST NUMBER:";
    cin>>num1;
    cout<<"\nENTER THE SECOND NUMBER:";
    cin>>num2;
    cout<<"\n\n";
    cout<<"YOU CAN PERFOM FOLLOWING OPERATIONS\n\n";
    cout<<"ENTER 1 FOR 'ADDITION'\n\n";
    cout<<"ENTER 2 FOR 'SUBTRACTION'\n\n";
    cout<<"ENTER 3 FOR 'MULTIPLICATION'\n\n";
    cout<<"ENTER 4 FOR 'DIVISION'\n\n";
    cout<<"\nCHOOSE THE OPERATION YOU WANT TO PERFORM:";
    cin>>choice;
    cout<<"\n\n";
    if(choice==1){
        cout<<"ADDITION OF THE TWO NUMBERS IS : "<< num1+num2;
    }
    else if(choice==2){
        cout<<"SUBTRACTION OF THE TWO NUMBERS IS : "<< num1-num2;
    }
    else if(choice==3){
        cout<<"MULTIPLICATION OF THE TWO NUMBERS IS : "<< num1*num2;
    }
    else if(choice==4){
        cout<<"DIVISION OF THE TWO NUMBERS IS : "<< num1/num2;
    }
    else
        cout<<"INVALID INPUT";
    
    cout<<"\n\n\t!!___END___!!\n\n";
}