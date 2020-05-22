#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
/***************************
    FUNCTIONS DECLARATION
***************************/
char riz[10]={'0','1','2','3','4','5','6','7','8','9'};
void game_body();
int win(),invalid=0;
string name1,name2,name;
char check;
/***********************************************************
    PROGRAM BODY WITH DO WHILE LOOP AND IF ELSE CONDITION
***********************************************************/
int main()
{

	do{
		if(check=='y' || check=='Y')
	   {
		  	riz[1]='1';
		  	riz[2]='2';
		  	riz[3]='3';
		  	riz[4]='4';
		  	riz[5]='5';
		  	riz[6]='6';
		  	riz[7]='7';
		  	riz[8]='8';
		  	riz[9]='9';
		}
	int player=1,i,choice;
    char sign;
    cout << "\t ____________________________________________"<<endl;
    cout << "\t|                                            |"<<endl;
    cout << "\t|\t WELCOME TO TIC TAC TOE GAME\t     |  \n\t|  PREPAID BY ==> RIZWAN AHMAD || REG [048]  |"<<endl;
    cout << "\t|____________________________________________|"<<endl<<endl;
    cout << "\t   ENTER FIRST PLAYER NAME = ";
    getline(cin, name1);
    cout << "\t   ENTER SECOND PLAYER NAME = ";
    getline(cin, name2);
	do
	{
    game_body();
    invalid=0;
    player = (player%2) ? 1 : 2;
    name   = (player%2) ? name1 : name2;
    cout <<"\n\t\t" << name <<" YOUR TURN NOW CHOSE BOX NUMBER ";
    cin >> choice;
    sign = (player == 1) ? 'X' : 'O';
         if      (choice == 1 && riz[1]=='1') riz[1]=sign;
         else if (choice == 2 && riz[2]=='2') riz[2]=sign;
         else if (choice == 3 && riz[3]=='3') riz[3]=sign;
         else if (choice == 4 && riz[4]=='4') riz[4]=sign;
         else if (choice == 5 && riz[5]=='5') riz[5]=sign;
         else if (choice == 6 && riz[6]=='6') riz[6]=sign;
         else if (choice == 7 && riz[7]=='7') riz[7]=sign;
         else if (choice == 8 && riz[8]=='8') riz[8]=sign;
         else if (choice == 9 && riz[9]=='9') riz[9]=sign;
         else
	       {
	       	invalid=1;
	        player--;
	        cin.ignore();
	        cout<<endl;
	       }
	       i=win();
	       player++;

    }
    while(i==-1);
    game_body();
	if(i==1)
	{
	 cout<<"\a\t\t==> "<<name<<" WIN THE GAME "<<endl;
     cout<<"\t\tPRESS Y IF YOU WANT TO PLAY AGIAN = ";
	 cin>>check;
	 system ("cls");
	 cin.ignore();
    }
	else
		{cout<<"\t==>\aGAME DRAW"<<endl;
		 cout<<"\t\tPRESS Y IF YOU WANT TO PLAY AGIAN = ";
	     cin>>check;
	     system ("cls");
         cin.ignore();
         }

    }
	while(check=='y' || check=='Y');
	return  0;
}
/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
   -1 FOR GAME IS IN PROGRESS
	O For GAME IS draw
**********************************************/
int win()
{
    if((riz[1] == riz[2] && riz[2] == riz[3])||
       (riz[4] == riz[5] && riz[5] == riz[6])||
       (riz[7] == riz[8] && riz[8] == riz[9])||
       (riz[1] == riz[4] && riz[4] == riz[7])||
       (riz[2] == riz[5] && riz[5] == riz[8])||
       (riz[3] == riz[6] && riz[6] == riz[9])||
       (riz[1] == riz[5] && riz[5] == riz[9])||
       (riz[3] == riz[5] && riz[5] == riz[7]))
        return  1;
    else if
      ((riz[1] != '1' && riz[2] != '2' && riz[3] != '3')&&
       (riz[4] != '4' && riz[5] != '5' && riz[6] != '6')&&
       (riz[7] != '7' && riz[8] != '8' && riz[9] != '9'))
		return  0;
	else
		return  -1;
   }
/*******************************************************************
   FUNCTION TO DESIGN GAME OF TICK CROS WITH PLAYER NAMES AND SIGN
********************************************************************/
void game_body()
{
    system("cls");
    cout << "\n\n\t { TIC TAC TOE GAME PREPAID BY ==> RIZWAN AHMAD || REG (048) } " << endl;
    cout << "\t   ---------------------------------------------------------" << endl << endl;
    cout << "\t\tPLAYER 1 IS "<<name1<<" AND PLAYER 2 IS " << name2 << endl ;
    cout << "\t   " <<name1 << " YOUR SIGN IS [X] AND " << name2 << " YOUR SIGN IS [0]" <<endl;
    cout << "\t\tBEST OF LUCK " << name1 << " AND " << name2 << endl;
    cout << "                     " << endl;
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  "  <<riz[1] << "  |  " <<riz[2] << "  |  " << riz[3] << endl;
    cout << "\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  "  <<riz[4] << "  |  " <<riz[5] << "  |  " << riz[6] << endl;
    cout << "\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  "  <<riz[7] << "  |  " <<riz[8] << "  |  " << riz[9] << endl;
    cout << "\t\t\t     |     |     " << endl;

    if(invalid==1)
    {
    	cout<<"\tAlready chose are invalid move "<<endl;
    }
}
/*******************************************************************
  END OF MY PROJECT: GAME COADING IS COMPLETE  BY RIZWAN AHMAD (048)
********************************************************************/

