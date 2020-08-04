#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isUnique(string s){
  int charArray[26];
  for(int i = 0; i < 26; i++){
    charArray[i] = 0;
  }
  cout << s;
  for(int i = 0; i < s.size(); i++){
    //convert all to lower case then add into an array that keeps count
    charArray[tolower(s[i]) - 97]++;
    if(charArray[tolower(s[i]) - 97] > 1){
      return false;
    }
  }
  return true;
}

int main(){
  string s;
  char userChoice = 'y';
  bool userContinue = true;
  while(userContinue){
    cout << "enter a string" << endl;
    cin >> s;

    if(isUnique(s)){
      cout << "++++++++that is a unique String!++++++++++++" << endl;
    }
    else{
      cout << "--------- that is not a unique String! ------------" << endl;
    }

    cout << "do you want to continue y/n?"<< endl;
    cin >> userChoice;
    if(userChoice == 'n') userContinue = false;
  }

  return 0;
}
