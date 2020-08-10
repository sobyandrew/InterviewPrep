//check if a string is one edit away
//this one is pretty similar to the palindromic one basically going to hash each char into counts
//check the counts and make sure the diff is only 1 hence copy and paste

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool OneAway(string s1,  string s2){
  cout << s1 << " " << s2 << " is ";
  int diffCount = 0;
  int charArray1[126] = {0};
  int charArray2[126] = {0};

  for(int i = 0; i < s1.size(); i++){
    charArray1[s1[i]] += 1;
  }

  for(int i = 0; i < s2.size(); i++){
    charArray2[s2[i]] += 1;
  }

  for(int i = 0; i < 126; i++){
    if(charArray1[i] != charArray2[i]){
      if(abs(charArray1[i] - charArray2[i]) == 1){
      //if((charArray1[i] == charArray2[i] + 1) || (charArray1[i] + 1 == charArray2[i])){//check to make sure diff is only one
        //honestly why didn't i do absolute value if(abs(charArray1[i] - charArray2[i]) > 1){
        diffCount +=1;
      }
      else{
        return false;
      } //difference is greater than one
    }
  }

  if(diffCount > 1 ){
    if(s1.size() != s2.size() && diffCount != 2)
      return false;
  };


  return true;
}

int main(){
  if(OneAway("pale", "ple")){
  //if(OneAway("pales", "ple")){
    cout << "one letter away only";
  }
  else{
    cout << "more than one letter away";
  }
  return 0;
}
