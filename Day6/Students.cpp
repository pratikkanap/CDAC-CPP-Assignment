/*Write a student class and use it in your program. Store the data of 10 students and display
 the sorted data according to their roll numbers, dates of birth, and total marks*/
 #include<iostream>
 using namespace std;
 class student{

    int rollnumber,dob,totalmarks,arr[20],i;

    public : 
    
            void accept(){
               cout << "Enter roll number of students : " << endl;
               for (int i = 0; i < 10; ++i) {
                  cin >> arr[i];
               }
               cout << "Enter date of birth of students : " << endl;
               for (int i = 0; i < 10; ++i) {
                  cin >> arr[i];
               }
               cout << "Enter total marks of students : " << endl;
               for (int i = 0; i < 10; ++i) {
                  cin >> arr[i];
               }
         }
               void display(){
                  cout << "\nDisplaying roll number of students." << endl;
                  for (int i = 0; i < 10; ++i) {
                       cout << "roll no of "<<i + 1<< " is " << ": " << arr[i] << endl;
                        
                  for (int i = 0; i < 10; ++i) {
                    cout << "date of birth "<<i + 1<< " is " << ": " << arr[i] << endl;
                  }
                  }
                  for (int i = 0; i < 10; ++i) {
                    cout << "Total marks "<<i + 1<< " is " << ": " << arr[i] << endl;
                  }
               }
             };
            
 int main(){
    student stud;
    stud.accept();
    stud.display();
 }
   
  /*
  
  */