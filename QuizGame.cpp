#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int Q_NO=1;
int CORRECT=0;
int WRONG=0;
bool ask[10]={true,true,true,true,true,true,true,true,true,true};

void display_random_question();//to display random questions
void display();//to display no. of questions , correct and wrong
void question(string question,string a,string b,string c,string d, char correct_answer);//to display question and answer
void result();

int main(){
    display();
    return 0;
}

void display(){
    system("cls");
    cout<<"Question no. : "<<Q_NO<<endl<<"Correct Answers : "<<CORRECT<<endl<<"Wrong Answer"<<WRONG<<endl<<endl;
    display_random_question();
}

void display_random_question(){
    srand(time(0));
    bool is_question_remaining=false;
    for(int i=0;i<10;i++){
        if(ask[i]){
            is_question_remaining=true;
            break;
        }
    }
    while(is_question_remaining){
        int no=rand()%10;
        if(ask[no]){
            ask[no]=false;
            switch(no){
                case 0 :
                question("Delaration a pointer more than once may cause ____","Error","Trap","Abort","Null",'c');
                break;

                case 1:
                question("Which one is not a correct variable type in C++?","float","real","int","double",'b');
                break;

                case 3:
                question("______ function is used to allocate space for array in memory","malloc","realloc","alloc","calloc",'d');
                break;

                case 4:
                question("A pointer pointing to a variable that is not initialized is called ____","void","null","empty","wild",'b');
                break;

                case 5:
                question("Default constructor has ____ arguments.","one","two","zero","none of these",'c');
                break;

                case 6:
                question("A class whos objects can not be created is known as _____","Absurd","dead","super","abstract",'d');
                break;

                case 7:
                question("Reusability of code in C++ is achieved through ____","Polymorphism","Inheritance","Encapsulation","1st and 2nd",'b');
                break;

                case 8:
                question("In CPP, members of a class are ______ by default.","public","private","static","protected",'b');
                break;

                case 9:
                question("In C++ Program, inline fuctions are expanded during ____","run time","debug time","compile time","coding time",'a');
                break;
            }
        }
    }

    result();
}

void result(){
    system("cls");
    cout<<"Total Questions : "<< Q_NO-1<<endl;
    cout<<"Correct Answers : "<< CORRECT<<endl;
    cout<<"Wrong Answers : "<< WRONG<<endl;
    if(CORRECT<WRONG)
        cout<<"Result : Pass"<<endl;
    else if(CORRECT>WRONG)
        cout<<"Result : Fail"<<endl;
    else
        cout<<"Result : Tie"<<endl;
}

void question(string question,string a,string b,string c,string d, char correct_answer){
    cout<<question<<endl;
    cout<<"A.\t"<<a<<endl;
    cout<<"B.\t"<<b<<endl;
    cout<<"C.\t"<<c<<endl;
    cout<<"D.\t"<<d<<endl;
    char answer;
    cout<<"Enter your answer : ";
    cin>>answer;
    if(answer == correct_answer)
        CORRECT++;
    else
        WRONG++;
    Q_NO++;
    display();
}





