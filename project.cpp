#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
   cout <<"hello C++"<<endl;
   
   string s="today is saturday";
   
   ofstream writer("output.txt");
   
   if(!writer){
       cout<<"error opening file"<<endl;
       return -1;
    
    }else{
       writer<< s <<endl;
       
       writer.close();
    }
    
    char letter;
    
    ifstream reader("output.txt");
    
       if(!reader){
       cout<<"error opening file"<<endl;
       return -1;
    
    }else{ 
    
      for(int i=0; ! reader.eof(); i++)
       { 
         reader.get(letter);
         cout<<letter;
       }
       cout<<endl;
       reader.close();
    }
}
