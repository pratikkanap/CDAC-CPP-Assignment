#include<iostream>
using namespace std;
#include<string.h>
class String1{
    int len;
    char* ptr;
    public :
            String1();
            void display();
            String1(char*);
            String1(char, int);
            String1(int);
            ~String1(){
                cout<<"Destructor is called"<<endl;
                if(ptr){
                    cout<<"in if"<<endl;
                    delete [] ptr;
                    ptr = NULL;
                }
            }

};
void String1 :: display(){
    if(len>1){
        cout<<"length of charater is "<<len<<endl;
        cout<<"String is "<<ptr<<endl;
    }
    else{
        cout<<"length of character is "<<len<<endl;
        cout<<"String is "<<*ptr<<endl;

    }
}
String1 :: String1(){
    len = 1;
    ptr = new char[len];
    *ptr = 'S';
}
String1::String1(char* s)
{
	len=strlen(s);
	ptr=new char[len+1];
	strcpy(ptr,s);
}
String1::String1(char c,int len)
{
	int i;	
	this->len=len;
	ptr=new char[len+1];
	for(i=0;i<len;i++)
	{
		ptr[i]=c;
	}
	ptr[len]='\0';
	
}
String1::String1(int l)
{
	len=l;
	ptr=new char[len+1];
	cout<<"enter string\n";
	cin>>ptr;

}
int main(){
  String1 s1;
	s1.display();
	String1 s2('t');
	s2.display();
	String1 s3('*',80);
	s3.display();
	String1 s4(4);
	s4.display();
}