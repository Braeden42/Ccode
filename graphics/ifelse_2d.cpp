//compile gcc nameoffile -o nameoffile.o
// ./nameoffile.o

#include <stdio.h>
using namespace std;
#include <iostream>

int main()
{
		int r,c;//row and column
		char thechar;
		char w = '<';
		char x = '*';
		char y = '?';
		char z = '>';
		int val = 0;
		int m[8][8] = {
			{1,1,1,1,1,1,1,1} ,
			{2,2,2,2,2,2,2,2} ,
			{3,3,3,3,3,3,3,3} ,
			{4,4,4,4,4,4,4,4} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
			  if (val == 1){
					thechar = w;}
					else if (val == 2){
						thechar = x;}
					else if (val == 3){
						thechar = y;}
					else{
						thechar = z;}
						cout<<thechar;
			}//end c
			cout<<"\n";
		}//end r
	return 0;
}
