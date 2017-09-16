#include <iostream>
#include <vector>
#include "puzzle.h"
#include "fuse.h"
using namespace std;

int main(){
bool checks = true;
string check ="";
    string solution="aa aa bbbb";
    string purposedsolution;
    string purposed_solution="";
    Puzzle puzzle{solution};
int counter = 6;    
Fuse fuse(counter);
int count;
 
    cout << "=================" << endl;
    cout << "    B O O M !" << endl;
    cout << "=================" << endl;
    cout << "Enter lower case letters to guess," << endl;
    cout << "! to propose a solution," << endl;
    cout << "0 to exit."  << endl;
     cout << fuse.to_string();
     cout << puzzle.to_string()<< ": ";
   while(checks)
    {
    if(puzzle.solve(puzzle.to_string())==true)
        {
        cout << "\n***W I N N E R***" << endl;
        exit(0);
         }
     char inp;
     cin >> inp;
    cin.ignore();

if(inp=='0'){
exit(0); 
}
else if(inp=='!')
{
   
   cout << fuse.to_string();
   cout << puzzle.to_string() << ": ";
   getline(cin,purposedsolution);
        if(puzzle.solve(purposedsolution)==true)
        {
        cout << "***W I N N E R***" << endl;
        exit(0);
         }
        else
        {
       cout << "######B O O M######" <<endl;
cout << "The solution was: " << puzzle.get_Solution() <<endl;
        exit(0);
         }
  }

else if (puzzle.guess(inp) == true)
{

count = 0;
for(int i = 0;i<solution.length();i++)
{
if (inp == solution[i] || solution[i]==' ')
{
count = count + 1; 
}
}
if(count == 2)
{
checks=fuse.burn();
if (checks==false)
{
cout << "\n";
cout << "######B O O M######" <<endl;
cout << "The solution was " << puzzle.get_Solution() <<endl;
exit(0);
}
cout << fuse.to_string();
cout << puzzle.to_string() << ": ";
}
else
{
cout << fuse.to_string();
cout << puzzle.to_string() << ": ";
}
}
else if (inp>='a' && inp <= 'z' && puzzle.guess(inp)==false)
{
cout << "Invalid Input-try again" <<endl;
cout << fuse.to_string();
cout << puzzle.to_string()<< ": ";
}
else {
cout << "Invalid Input-try again"<<endl;
cout << fuse.to_string();
cout << puzzle.to_string()<< ": ";
}
}
return 0;
     }
    
