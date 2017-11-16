#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main() {
   string line;
   // read each line
   while (getline(cin, line)) {
      // create stringstream from line
      int count = 0;
      stringstream  ss(line)      ;
      // loop through storage with >>, counting words
      string temp;
      getline(ss,temp,'(');
      getline(ss,temp,')');
      cout << temp << endl;
      stringstream ss1(temp);
      string temp2;
      while(ss1 >> temp2)
      {
         count++;
      }
      // print word count
      cout << count << endl;
   }
}




