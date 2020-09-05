/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.cpp
 * Author: shara
 *
 * Created on 27 August, 2019, 1:15 PM
 */

#include<iostream>
 
  using namespace std;

  void pattern(int n)
  {
      for(int i=1;i<=n;i++) {
   int  k = (i % 2 != 0) ? i+1 : i;
    for(int g = n; g>k; g--)
     cout<<" ";
     for(int j=0;j<k;j++)
     cout<<" ";
     cout<<endl;
   }
  }

  int main()
  {
      int n;
      cout<<"Enter a number:";
      cin>>n;
      pattern(n);
      return 0;
  }

