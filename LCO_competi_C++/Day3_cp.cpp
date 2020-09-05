// A chef was cooking something special which required exact 200ml water but he doesn't have 200ml cup
// he has a 500ml cup and a 300ml cup but that dish required exactly 200ml water.can you solve this problem in c++?


#include<iostream>

using namespace std;

int main()
{
    int bigCup = 500;
    int smallCup = 300;

    int requiredWater = bigCup - smallCup;

    cout<< requiredWater;
    return 0;
}