#include<iostream>
using namespace std;

#include "stack.h"
#include <cstring>

int main(int argc, char **argv){
/*
  Exercise 2
 printf("Checking the parentheses in argv arguments\n");

   */
  char t;
for(int i = 1; i < argc; i++){
  Stack s; 
  int match=1;
     for(int j=0;j<strlen(argv[i]);j++){
      switch(argv[i][j]){
        case '[': s.push(argv[i][j]); break;
        case '{': s.push(argv[i][j]); break;
        case ']': t=s.pop();
                  if(t!='[') match=0;
                  break;
        case '}': t=s.pop();
                  if(t!='{') match=0;
                  break;
      }
      if (match==0) break;
     }
      if(match==0) cout<<"argv "<<i<<" is incorrect:mismatch"<<endl;
     else if(s.fetch()>0) cout<<"argv "<<i<<" is incorrect:too many open parentheses."<<endl;
     else cout<<"argv "<<i<<" is correct."<<endl;
    }
    
return 0;
  }
