#include <iostream>

using namespace std;
//using function for swaping
void swap(int *a, int *b){
	int x = *a;
	*a = *b;
	*b = x;
}
//Main method started here, compiler always checks Main method first
int main(){
      int no1 =5 ;
      int  no2 = 6;
       cout<<"before swaping, n1= "<<no1<<" and n2= "<<no2<<endl;
   
   
   swap(&no1, &no2);
   
   cout<<"After swapping, n1= "<<no1<<" and n2= "<<no2<<"";
   
   return 0;
}
