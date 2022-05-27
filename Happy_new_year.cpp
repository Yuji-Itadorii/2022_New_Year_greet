#include<iostream>
#include<string>
using namespace std;

void display(void){
    cout<<"*";
}

void print2(void){
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 13; j++)
        {
            if (i==1||i==2||i==5||i==6||i==9||i==10){
                display();
            }
            else if(i==3||i==4){
                if (j==10||j==11||j==12||j==13)
                {
                    display();
                }
                else{
                    cout<<" ";
                }   
            }
            else if (i==7||i==8)
            {
               if (j==1||j==2||j==3||j==4)
                {
                    display();
                }
                else{
                    cout<<" ";
                }   
            }   
        }
        cout<<endl;
    }  
        cout<<endl;
}

void print0(void){
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <= 13; j++)
        {
            if (i==1||i==2||i==9||i==10){
                display();
            }
            else
            {
                if (j==1||j==2||j==3||j==4||j==10||j==11||j==12||j==13)
                {
                    display();
                }
                else{
                    cout<<" ";
                }
                
            }
            
        }
        cout<<endl;
    }
        cout<<endl; 
}

int main(){
    string str;
    cout<<"Enter your name please : ";
    getline(cin , str);
    cout<<"Hello "<<str<<" ,Wish You a Happy New Year!!"<<endl;
    cout<<"_____________________________________________________"<<endl;
    print2();
    print0();
    print2();
    print2();
    cout<<"_____________________________________________________"<<endl;



    return 0;
}