#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;
int scr=0,ap=0,ea=0,ff=0,count=0,amount[]={1000,2000,4000,8000,20000,50000,100000,500000,1000000,2500000,5000000,10000000};

int main ()
{
	void randomizer(char *); //overloaded
	void firstround(char *,int,int*); 
	void mainround(int *); 
	void randomizer(int *); //overloaded
	void qualifier(int,int*);

	fstream qfile;
	int num,plyrnum=0,a[12],score[80];
	char textfiles[]="abcdefghij";
	
	cout<<"\t\t\tWELCOME TO THE QUALIFYING ROUND\t"<<endl;
	cout<<setw(42)<<setfill('-')<<"RULES"<<setw(38)<<setfill('-')<<"\n";
	cout<<"\t\t\t1.There are 6 questions in total\n\t\t\t2.Each question has 4 OPTIONS\n\t\t\t3.Any option between 1 to 4 is correct\n\n";
	cout<<"How many players want to play : ";
	cin>>num;
	while(num!=plyrnum++)
	{
		randomizer(textfiles); //randomises the fils
		system("cls");
		cout<<"This is player : "<<plyrnum<<endl;
		firstround(textfiles,plyrnum,score);
	}
	
	qualifier(num,score);
	
	time_t t;
	srand((unsigned) time(&t));
	cout<<"\t\t\t\tWELCOME TO QUIZZY\t\n\n"<<' '<<endl;
	cout<<setw(42)<<setfill('-')<<"RULES"<<setw(38)<<setfill('-')<<"\n";
	cout<<"\t\t1.There are 12 questions in total\n\t\t2.Each question has 4 OPTIONS\n\t\t3.Any option between 1 to 4 is correct\n\t\t4.You have 3 lifelines to help you\n\n";
	cout<<setw(42)<<setfill('*')<<"LIFELINES"<<setw(39)<<setfill('*')<<"\n";
	cout<<"\t\tFor JANTA KI AWAAZ type \"6\"\n\t\tFor EXPERT KI SALAH type \"7\"\n\t\tFor DOUBLE DIP type \"9\" \n \t\tTo EXIT press  \"0\"\n"<<endl;
	cout<<"Press any key to start the game"<<endl;
	getch();
	system("cls");
	randomizer(a);

	mainround(a);
	getch();
	return 0;
	}
	
	void mainround (int *a)
	{
		void audience(int);
		void expert(int);
		void fifty(int);
		void answer(int);
		fstream qfile;
		int i,j;
		char getq[80];
		for(i=1,j=0;i<13;i++,j++)
		switch(a[j])
		{
			
		case 1:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest1.txt",ios::in);
		qfile.seekg(0,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		
		answer (1);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
	
		break;

		case 2:
	
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest1.txt",ios::in);
		qfile.seekg(124,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (2);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
		
		break;
		
		case 3:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest1.txt",ios::in);
		qfile.seekg(253,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (3);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
		
		break;
		
		case 4:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest2.txt",ios::in);
		qfile.seekg(0,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (4);
		cout<<"Press any key to continue to the next question "<<endl;
		getch(); 
		system("cls");
		qfile.close();
	
		break;
	
		case 5:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest2.txt",ios::in);
		qfile.seekg(112,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (5);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
	
		break;
	
		case 6:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest2.txt",ios::in);
		qfile.seekg(213,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (6);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
	
		break;
	
		case 7:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest3.txt",ios::in);
		qfile.seekg(0,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (7);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
	
		break;
	
		case 8:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest3.txt",ios::in);
		qfile.seekg(112,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (8);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
		break;
	
		case 9:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest3.txt",ios::in);
		qfile.seekg(198,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (9);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
	
		break;
	
		case 10:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest4.txt",ios::in);
		qfile.seekg(0,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (10);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
	
		break;
	
		case 11:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest4.txt",ios::in);
		qfile.seekg(82,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (11);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
		
		break;
		
		case 12:
		cout<<"\nQUESTION---"<<i<<endl;
		cout<<"LIFELINES\nJANATA(press 6)---"<<1-ap<<"\tEXPERT(press 7)---"<<1-ea<<"\tDOUBLE DIP (press 8)---"<<1-ff<<endl<<endl;
		cout<<"ANSWER THIS QUESTION TO WIN----Rs "<<amount[count]<<endl<<endl;
		qfile.open("quest4.txt",ios::in);
		qfile.seekg(185,ios::cur);
		while(qfile.getline(getq,50)&&(*getq!='d'))
		cout<<getq<<endl;
		answer (12);
		cout<<"Press any key to continue to the next question "<<endl;
		getch();
		system("cls");
		qfile.close();
	
		break;
	
		default :
		cout<<"wrong option"<<endl<<"Select the appropriate one from 1 to 4"<<endl; 
		break;
		}

	if(i==13)
	cout<<"CONGRATULATIONS!\n YOU HAVE WON THE GAME!!"<<endl;
	cout<<"Press any key to continue!"<<endl;
	getch();
		}
		
	void answercheck(char option, char ques)
	{
		char getdata[20],optn[3];
		ifstream file;
		int t=1;
		file.open("ans.txt");
		for(int i=0;i<10;i++)
		{
		file.getline(getdata,20);
		
		
		optn[0]=ques;
		optn[1]=option;
		optn[2]='\0';
		
		
		if(!strcmp(getdata,optn))
		{
		scr++;
		cout<<"CONGRATS \nTHAT WAS THE RIGHT ANSWER"<<endl<<endl;
		t=0;
		cout<<"Press any key to continue!"<<endl;
		getch();
		system("cls");
		}
		
	}
		if(t)
		{
		cout<<"SORRY\nWRONG ANSWER"<<endl<<endl;
		cout<<"Press any key to continue!"<<endl;
		getch();
		system("cls");
		}
		file.close();
		}
		
		void randomizer (int *array) //overloaded
		{
			int i;
			for(i=0;i<12;i++)
			array[i]=i+1;
			for(i=0;i<12;i++)
			{
				int t=array[i];
				int rv=rand()%12;
				array[i]=array[rv];
				array[rv]=t;
			}
		}
		
		void randomizer(char *chararray) //overloaded
		{
			time_t t;
			srand((unsigned) time(&t));
			int i;
			for(i=0;i<10;i++)
			{
				char c=chararray[i];
				int rv=rand()%10;
				chararray[i]=chararray[rv];
				chararray[rv]=c;
			}
		}

			
		void firstround (char *textfile,int playernum, int *score)
		{
			void answercheck (char ,char);
			for(int i=0;i<6;i++)
			{
				cout<<"YOUR CURRENT SCORE IS-----"<<scr<<endl<<endl;
				ifstream file;
				char option;
				char ques[80]={},text[80];
				ques[0]=textfile[i];
	
				strcat(ques,"q.txt");
			
				file.open(ques);
				while(file.getline(text,80))
				cout<<text<<endl;
				cin.ignore ();
				cout<<"Enter option : ";
				cin>>option;
				
				answercheck (option,ques[0]);
				file.close();
				
				if (i==5)
				{
					score[playernum-1]=scr;
					cout<<"Your turns up"<<endl;
					cout<<"Your score---"<<scr<<endl;
					cout<<"Press any key to continue for the next player to play"<<endl;	
					scr=0;
					getch();
					}
					}
		}
			void qualifier(int n,int *score)
			{
				int i,large=score[0],player;
				for(i=0;i<=n-1;i++)
				if(large<score[i])
				{
					large=score[i];
					player=i;
				}
				cout<<"\nCONGRATS PLAYER "<<":"<<player+1<<" \nYOU ARE QUALIFIED FOR THE NEXT ROUND WITH SCORE "<<large<<endl<<"Press any key for the next round";
				getch();
				system("cls");
			}
		
		void answer (int i)
	{
		void optioncheck(int,char);
		char x;
		cin>>x;
		if (i<=3&&i>0)
		{
		if(x=='1')
		{
		cout<<"Correct answer"<<endl;
		cout<<"Congratulations you won Rs."<<amount[count]<<endl;count++;
		}
		else
		optioncheck(i,x);
		}
		if (i<=6&&i>3)
		{
		if(x=='2')
		{
		cout<<"Correct answer"<<endl;
		cout<<"Congratulations you won Rs."<<amount[count]<<endl;count++;
		
		}
		else
		optioncheck(i,x);
		}
		if (i<=9&&i>6)
		{
		if(x=='3')
		{
		cout<<"Correct answer"<<endl;
		cout<<"Congratulations you won Rs."<<amount[count]<<endl;count++;
		}
		else
		optioncheck(i,x);
		}
		if (i<=12&&i>9)
		{
		if(x=='4')
		{
		cout<<"Correct answer"<<endl;
		cout<<"Congratulations you won Rs."<<amount[count]<<endl;count++;
		}
		else
		optioncheck(i,x);
		}
	}
 void optioncheck(int i,char x)
 {
	void audience(int);
	void expert(int);
	void fifty(int);
	if(x=='5'|| x=='9')
	{
	cout<<"Wrong Option !"<<endl<<"Enter options from 1 to 4 or for lifelines enter options from 6 to 8.\n";
	cout<<"\nEnter your option : ";
	answer(i);
	}
		else if (x=='6')
		audience(i);
		else if (x=='7')
		expert(i);
		else if (x=='8')
		fifty(i);
		else if(x=='0')
		{
			char ans;
			cout<<"Are you sure you want to exit ?\ny\\n"<<endl;
			ans=getch();
			if(ans=='y'||ans=='Y')
			{
			cout<<"Congratulations you won Rs."<<amount[count-1]<<endl;
			getch();
			exit(0);
			}
			else
			cout<<"Continue playing the game"<<endl<<"Enter your option : ";
			answer(i);
			}
		
		else
		{
			cout<<"Game Over"<<endl;
			cout<<"Congratulations you won Rs."<<amount[count-1]<<endl;
			cout<<"Press any key to exit!"<<endl;
			getch();
			exit(0);
			}
		}

void audience(int i)
{
	if(!ap)
	{
		if (i<=3&&i>0)
		cout<<"Option 1 -- 60%\t\tOption 2 -- "<<rand()%15<<"%\nOption 3 -- "<<rand()%5<<"%\t\tOption 4 -- "<<rand()%20<<"%"<<endl<<endl<<"Enter your option : ";
		
		if (i<=6&&i>3)
		cout<<"Option 1 -- "<<rand()%5<<"%\t\tOption 2 -- 70%\nOption 3 -- "<<rand()%15<<"%\t\tOption 4 -- "<<rand()%10<<"%"<<endl<<endl<<"Enter your option : ";
			
		if (i<=9&&i>6)
		cout<<"Option 1 -- "<<rand()%10<<"%\t\t\tOption 2 -- "<<rand()%10<<"%\nOption 3 -- 60%\t\t\tOption 4 -- "<<rand()%20<<"%"<<endl<<endl<<"Enter your option : ";
			
		if (i<=12&&i>9)
		cout<<"Option 1 -- "<<rand()%10<<"%\t\t\tOption 2 -- "<<rand()%5<<"%\nOption 3 -- "<<rand()%20<<"%\t\t\tOption 4 -- 65%"<<endl<<endl<<"Enter your option : ";
		
		ap++;
		}
		else 
		cout<<"YOU HAVE ALREADY USED \"JANTA KI AWAAZ\"!!!"<<endl<<endl<<"Enter your option : ";
		
	answer(i);
	
}

void expert(int i)
{
	if(!ea)
	{
		if (i<=3&&i>0)
		cout<<"I THINK OPTION 1 IS CORRECT BUT NOT SURE ABOUT OPTION 3"<<endl<<endl<<"Enter your option : ";

		if (i<=6&&i>3)
		cout<<"I THINK OPTION 2 IS THE RIGHT ONE"<<endl<<endl<<"Enter your option : ";
		
		if (i<=9&&i>6)
		cout<<"I'M NOT SURE BUT I THINK IT'S OPTION 3"<<endl<<endl<<"Enter your option : ";
		
		if (i<=12&&i>9)
		cout<<"ACCORDING TO ME IT SHOULD BE OPTION 4 "<<endl<<endl<<"Enter your option : ";

		ea++;
	}
	else
	cout<<"YOU HAVE ALREADY USED \" EXPERT KI SALAH\" "<<endl<<endl<<"Enter your option : ";
	answer(i);
	
}

void fifty(int i)
{
	if(!ff)
	{
		if (i<=3&&i>0)
		cout<<"EITHER OF 1 OR 2 IS CORRECT"<<endl<<endl<<"Enter your option : ";
	
		if (i<=6&&i>3)
		cout<<"EITHER OF 2 OR 4 IS CORRECT"<<endl<<endl<<"Enter your option : ";
				
		if (i<=9&&i>6)
		cout<<"EITHER OF 4 OR 3 IS CORRECT"<<endl<<endl<<"Enter your option : ";
				
		if (i<=12&&i>9)
		cout<<"EITHER OF 1 OR 4 IS CORRECT"<<endl<<endl<<"Enter your option : ";
		
		ff++;
		}
	else 
	cout<<"YOU HAVE ALREADY USED \"DOUBLE DIP \""<<endl<<endl<<"Enter your option : ";
	answer(i);
}
