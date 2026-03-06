#include<iostream>
using namespace std;

#include "stack.h"
#include <cstring>

int main(int argc, char **argv){
    Stack s; 
/*
  Exercise 2
 printf("Checking the parentheses in argv arguments\n");

   */
  int i = 1;
  char t;
  int match=1;

     for(int j=0;j<strlen(argv[i]);j++){
      switch(argv[i][j]){
        case '[': s.push(argv[i][j]); break;
        case '(': s.push(argv[i][j]); break;
        case '{': s.push(argv[i][j]); break;
        case ']': t=s.pop();
                  if(t!='[') match=0;
                  break;
        case ')': t=s.pop();
                  if(t!='(') match=0;
                  break;
        case '}': t=s.pop();
                  if(t!='{'); match=0;
                  break;
      }
      if (match==0) break;
      else cout<<"correct."<<endl;
     }
     if(match==0) cout<<"Incorrect:mismatch"<<endl;
     else if(s.fetch()>0) cout<<"Incorrect:too many open parentheses."<<endl;
     else cout<<"correct."<<endl;
return 0;
  }
