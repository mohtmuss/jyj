#include <iostream>


using namespace std;

char choice;
bool k = true;
int main(){
          
         while(k){
          cout<<"*************************************";
          cout<<"\n\t\t Awash Hotel\n\n";
           
          
          cout<<"a: To add guest\n";
          cout<<"c: To checkout guest\n";
          cout<<"m: To modify guest\n";
          cout<<"r: to remove guest\n\n\n";
          
          cout<<"Enter here: ";
          cin>> choice;
          
          switch (choice)
          {
          case 'a':
            cout<<"Clicked a";
            break;
         case 'c':
            cout<<"Clicked a";
            break;
         case 'm':
            cout<<"Clicked a";
            break;
         case 'r':
            cout<<"Clicked a";
            break; 
         case 'q':
         k = false;
         break;

          
          default:
              cout<<"Please enter again(:\n\n";
            break;
          }
          
        }



}
