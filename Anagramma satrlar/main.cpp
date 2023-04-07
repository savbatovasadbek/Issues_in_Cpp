#include <iostream>
#include <string>

using namespace std;

int main(){
  string str1, str2;
  char temp;

  cout << "Enter text one: "; getline(cin, str1);
  cout << "Enter text two: "; getline(cin, str2);

  int len1 = str1.length();
  int len2 = str2.length();

  for (int i = 0; i < len1; i++){
    for (int j = 0; j < len1 - 1; j++){
      if (str1[j] > str1[j + 1]){
        temp = str1[j];
        str1[j] = str1[j + 1];
        str1[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < len2; i++){
    for (int j = 0; j < len2 - 1; j++){
      if (str2[j] > str2[j + 1]){
        temp = str2[j];
        str2[j] = str2[j + 1];
        str2[j + 1] = temp;
      }
    }
  }

  if (str1 == str2) {
    cout << "The input strings are anagrams. :)\n";
  }
  else {
    cout << "The input strings are not anagrams. :(\n";
  }
  return 0;
}
