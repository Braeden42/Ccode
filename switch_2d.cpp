//compile gcc nameoffile -o nameoffile.o
// ./switch_2d0.o

#include <stdio.h>
using namespace std;
#include <iostream>

int main()
{
		int r,c;//row and column
		string word = "DBZBA"
		int val = 0;
		int m[8][8] = {
			{1,2,3,4,0,0,0,0} ,
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
				switch ( input ) {
				case 1:
				  playgame();
				  break;
				case 2:
				  loadgame();
				  break;
				case 3:
				  playmultiplayer();
				  break;
				case 4:
				  cout<<"Thank you for playing!\n";
				  break;
				default:
				  cout<<"\n";
				  break;
				}
			}//end c
			cout<<"\n";
		}//end r
	return 0;
}
