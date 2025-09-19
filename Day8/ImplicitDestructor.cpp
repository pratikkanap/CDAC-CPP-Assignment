#include<iostream>
using namespace std;
#include<string.h>

class string1{
    int len;
    char*  ptr;
    public: 
            string1();
            void display();
            string1(char*);
            string1(char , int);
            string1(int);
            ~string1(){
                cout<<"Destructor is called"<<endl;
                if(ptr){
                    cout<<"in if"<<endl;
                    delete [] ptr;
                    ptr = NULL;

                }
            }
};
void string1 :: display(){
    if(len>1){
        cout<<"Length of character is : "<<len<<endl;
        cout<<"string is"<<ptr<<endl;
    }
    else{
        cout<<"Length of character is :"<<len<<endl;
        cout<<"string is :"<<*ptr<<endl;
    }
}
string1 :: string1(){
    len = 1;
    ptr = new char[len];
    *ptr = 'S';
}
string1 :: string1(char* s){
    len = strlen(s);
    ptr = new char[len + 1];
    strcpy(ptr , s);
}
string1 :: string1(char c, int len){
    int i ;
    this->len = len;
    ptr = new char[len + 1];
    for(i=0; i<len; i++){
        ptr[i] = c;
    }  
    ptr[len] = '\0';

}
string1 :: string1(int l){
    len = l;
    ptr = new char[len + 1];
    cout<<"Enter string :"<<endl;
    cin>>ptr;
}
int main()
{
	string1 s1;
	s1.display();
	string1 s2('r');
	s2.display();
	string1 s3('*',80);
	s3.display();
	string1 s4(4);
	s4.display();
	
}
