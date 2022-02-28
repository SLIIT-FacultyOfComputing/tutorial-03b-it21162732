 #include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout <<setw(3)<< "No" <<setw(13)<< "Name" <<setw(9)<< "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<  setw(3)<<r+1 
          <<  setw(13) << names[r]
          << setw(9)<<marks[r] << endl;
 }
}