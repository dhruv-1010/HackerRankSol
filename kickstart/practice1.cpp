#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  int len = kingdom.length();
  char check = kingdom[len-1];
  //solution uses a hash set i didnt knew how to implement a hashset at this time 
  if(check =='A' || check == 'E'|| check == 'I'|| check =='O'|| check =='U'|| check =='a'|| check =='e'|| check =='i'|| check =='o'|| check =='u'){
  return "Alice";}
  else if(check =='y' || check=='Y') return "nobody";
  else return "Bob";
}
int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
