//test to see if a string is a permutation of a palindrome
#include <iostream>
#include <string>
using namespace std;

bool palindromePermute(string s1,  string s2){
  if(s1.size() != s2.size())
    return false;

  int charArray1[126] = {0};
  int charArray2[126] = {0};

  for(int i = 0; i < s1.size(); i++){
    charArray1[s1[i]] += 1;
  }

  for(int i = 0; i < s2.size(); i++){
    charArray2[s2[i]] += 1;
  }

  for(int i = 0; i < 126; i++){
    if(charArray1[i] != charArray2[i])
      return false;
  }

  return true;
}

int main(){

  if(palindromePermute("taco cat", "ca t taco")){
    cout << "valid palindrome permutation";
  }
  else{
    cout << "not a permuted palindrome";
  }
  return 0;
}
