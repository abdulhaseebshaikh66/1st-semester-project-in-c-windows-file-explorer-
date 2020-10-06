#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
//#include<graphics.h>


// functions for calculator 
int add(int a,int b);
int sub(int a, int b);
int multiply(int a, int b);
float division(float a, float b);
int calculator ();

//Delay
void delay();
void delay2();

//filing
int ID_CARDS();
struct data
{
	char name[20],f_name[20],u_name[30],adress[30];
	int age,d,m,y;
	int e_d,e_m,e_y;
};

//Game 
struct player
{
	char name[20],name1[20];
};
char box[10]={ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; 
char name[2][20];
int result();
int  table();
int game();


void instructions();

void filing();
struct date
{
	int d,m,y;
};

int main()
{
	int back1,back3,constant=1;
	int choice10,choice40,ii;
	int k1=0,k2=0,colum=0,desktop;
	int passkey=1,choice111;
	int a=1,k,loop=3,i,j,choice=0,row=0,choice1,choice2,choice3,choice4,pass;
	int back=1;
    char mark;
	
	// for color screen
	int color;
	{
//		system("color 1G");
		printf("0.Gray with red words\n1.Black\n2.Black with Yellow words\n3.Yellow\n4.BLue\n5.Red\n6.Purple\n");
		printf("\nChoice the color: ");
		scanf("%d",&color);
		if(color==0)
			system("color 7C");
		if(color==2)
			system("color 0E");
		else if(color==3)
			system("color 6F");
		else if (color==4)			
			system("color 1F");
		else if(color==5)
			system("color 4F");
		else if(color==6)
			system("color 5F");
	}
	system("cls");
	
	instructions();
	
	system("cls");
	delay();
	printf("\aWelcome to window\n");
	delay2();
	printf("Enter key");
	printf("\nPassword:");
	scanf("%d",&pass);
	//retry condition
	if((pass>1 ||pass<1))
	{
		for(passkey=0;passkey<3;passkey++)
		{
		printf("Wait");
		for(i=0;i<3;i++)
		{
			delay();
			printf(".");
		}
		system("cls");
		
		printf("\aTry again for %d times:",3-passkey);
		scanf("%d",&pass);
		
		if(pass==1)
			passkey=3;
		}
	}
	if(pass>=1 && pass<=1)
	{
		printf("Wait");
		for(i=0;i<3;i++)
		{
			delay();
			printf(".");
		}
		system("cls");
	while(a>=1 || a<=1)
	{
		system("cls");
		printf("1.My computer\n");
		printf("2.This PC\n");
		printf("3.Personal information\n");
		printf("4.New folder\n");
		printf("5.ID_CARDS\n");
		printf("6.Exit\n");
		scanf("%d",&choice);
		back=1;
		// for back loop
		while(back==1)
		{
			delay2();			
			
			while(choice<1||choice>6
			/*&&/*constant*/)
			{
				printf("\aInvalid Move\n");
				scanf("%d",&choice);
				
				if(choice>0||choice<6)
				{
//					constant=0;
				}
			}
//			constant=1;
		switch(choice)
		{
		//1st switch case	
		case 1:
			system("cls");
			printf("1.Desktop");
			printf("\n2.Downloads");
			printf("\n3.Image\n");
			printf("4.Back\n");
			scanf("%d",&choice2);
			delay2();
			switch(choice2)
				{
					case 1:
						{	
							printf("1.assignment");
							printf("\n2.Back\n");
							scanf("%d",&desktop);
							back1=1;
			/*back*/		{
							switch(desktop)
							{
								case 1:
								printf("\n ASSIGNMENT WORK\n");
								printf("\n1.stars");
								printf("\n2.double stars");
								printf("\n3.tringle\n");
								scanf("%d",&choice1);
								switch(choice1)
								{						
										case 1:
											printf("\nEnter the number of rows:");
											scanf("%d",&row);
											for(i=1;i<=row;i++)
											{
												for(j=1;j<=i;j++)
												{
													printf("*");
												}
												printf("\n");
											}
											getch();
										break;
		
										case 2:
											printf("\nEnter the number of rows:");
											scanf("%d",&row);
											for(i=1;i<=row;i++)
											{
												for(j=1;j<=i;j++)
												{
													printf("* ");
												}
												printf("\n");
											}
			
											for(i=row-1;i>=1;i--)
											{
												for(j=1;j<=i;j++)
												{
													printf("* ");
												}
												printf("\n");
											}
											getch();	
										break;
										
											case 3:
												printf("Enter the number of rows:");
												scanf("%d",&row);
												
												colum=(row*2)-1;
												k1=row-1;
												k2=row+1;
												k=1;
												
//												printf("\n");
												
												for(i=1;i<=row;i++)
												{
													for(j=1;j<=colum;j++)
													{
														if(j>=k2-i && j<=k1+i && k)
														{
															delay2();
															printf("*");
															k=0;	
														}
														else
														{
															printf(" ");
															k=1;
														}
													}
													printf("\n");
												}
											getch();
											break;
								
								}
								break;
								case 2:
								{
									back1=0;
									break;
								}
								
								
							}
								break;		
							}
						}
					case 2:
					{
						int calcu;
						printf("\n1.calculator");
						printf("\n2.back\n");
						scanf("%d",&calcu);
						switch(calcu)
						{
							case 1:
								calculator();
							break;
							case 2:
								back1=0;
							break;	
						}
						getch();
					break;
					}
					case 3:
						{
							printf("Image");
							/*
							initwindow(688,388,"Image");
							readimagefile("305px-Cimage.jpg",0,0,688,388);
							getch();
							
							*/
						break;
						}
					case 4:
						{
							back=0;
							break;
						}
				}
				break;
		case 2:
		{
			system("cls");
			printf("\a1.Windows(C:)");
			printf("\n2.Recovery(D:)");
			printf("\n3.Back\n");
			scanf("%d",&choice3);
			switch(choice3)
			{
				case 1:
					printf("\aNot allowed to open C-Window\a\a\a");
					delay();
					delay();
					back=0;
					getch();
				break;
				case 2:
					printf("\a1.Tic Tac Toe Game\n");
					printf("\a2.Note Pad\n");
					printf("3.Back\n");
					scanf("%d",&choice40);
					back3=1;
//					while(back3==1)
					{
					switch(choice40)
					{
						case 1:
						{
							game();
							getch();
							back3=0;		
							break;
						}
						case 2:
						{
							filing();
							back3=0;
							break;
						}
						case 3:
						{
							back3=1;
							break;
						}
					}
					}
				back=0;
				break;
				case 3:
					back=0;
				break;
			}
		break;
		case 3:
		{
			char name[20],fname[20],address[30],city_name[20];
			int age,phone,constant=1;
			struct date data;
			FILE *ptr;
			char yn[5];
			ptr= fopen("personal_file.txt","a");
			if( ptr==NULL)
			{
				printf("File does not exist.\n");
			}
			else 
			{
				printf("Entet Date(D/M/Y):-\n\nEnter the name\nFather name\nAge\nAddress\nPhone number\nCity name\n");
				printf("?\n");
				scanf("%d/%d/%d%s%s%d%s%d%s",&data.d,&data.m,&data.y,name,fname,&age,address,&phone,city_name);
				while(!feof(stdin))
				{
					fprintf(ptr,"\nDate:-  %d/%d/%d \nName:-  %s \nF_name:-%s \nAge:-   %d \nAdress:-%s \nPhone:- %d  \nC_name:-%s\n\n",data.d,data.m,data.y,name,fname,age,address,phone,city_name);	
					printf("?  ");
					scanf("%d/%d/%d%s%s%d%s%d%s",&data.d,&data.m,&data.y,name,fname,&age,address,&phone,city_name);
				}
				fclose(ptr);
			}	
	
			
			back=0;
			getch();
			delay2();
			break;
		}					

		break;
		case 4:
			
			printf("\n1.stars");
			printf("\n2.double stars");
			printf("\n3.tringle");
			printf("\n4.back\n");
				{
					scanf("%d",&choice111);
					switch(choice111)
						{
							case 1:
								printf("\nEnter the number of rows:");
								scanf("%d",&row);
								for(i=1;i<=row;i++)
								{
									for(j=1;j<=i;j++)
									{
										printf("*");
									}
								printf("\n");
								}
								getch();
							break;
		
							case 2:
								printf("\nEnter the number of rows:");
								scanf("%d",&row);
								for(i=1;i<=row;i++)
								{
									for(j=1;j<=i;j++)
									{
										printf("* ");
									}
									printf("\n");
								}
			
								for(i=row-1;i>=1;i--)
								{
									for(j=1;j<=i;j++)
									{
										printf("* ");
									}
								printf("\n");
								}
								getch();	
							break;
		
							case 3:
								printf("Enter the number of rows:");
								scanf("%d",&row);
								colum=(row*2)-1;
								k1=row-1;
								k2=row+1;
								k=1;
//								printf("\n");
								for(i=1;i<=row;i++)
								{
									for(j=1;j<=colum;j++)
									{
										if(j>=k2-i && j<=k1+i && k)
										{
											printf("*");
											k=0;	
										}
										else
										{
											printf(" ");
											k=1;
										}
									}
									printf("\n");
								}
							
								getch();
							break;
							case 4:
								back=0;
								
							break;
						}
				}
			break;
			case 6:
				return a=2;
			break;
			case 5:
				ID_CARDS();
				back=0;
			break;
			if(choice>=7)
			{
				printf("\aInvalid number");
				getch();
			}
		}
	}
	}
	}

	}
	else
	{
		delay();
		printf("\aIncorrect password");	
	}
	return 0;
}
void instructions()
{
	int i;
	system("cls");
	printf("\a\n\n\n\t\t\tNote:\n\t\t\t"
	"This windows can show the icon name only. Folder can open by number,"
	"\n\t\t\tNumber is writen there. Window key is 1,Press only one key for skip\n"
	"\t\t\tthese lines and open the window: ");
	getch();
	system ("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t========================================================================\n\n");
	printf("\t\t\t\t\t\tWelcome to Window\n\n\t\t\t\t\t\t    Loading");
	for(i=0;i<4;i++)
	{
		delay();   
		printf(".");
	}
}
//for delay function
void  delay()
{
	int  i;
	for(i=0;i<=380000000;i++);
}
void  delay2()
{
	int  i;
	for(i=0;i<=1900000;i++);
	
} 
// 1 for gameover with result and -1 game is continue and 0 for no result.
int result()
{
    if (box[1] == box[2] && box[2] == box[3] || box[4] == box[5] && box[5] == box[6] || box[7] == box[8] && 
	box[8] == box[9] || box[1] == box[4] && box[4] == box[7] )
        return 1;
  
        else if (box[2] == box[5] && box[5] == box[8] || box[3] == box[6] && box[6] == box[9] || box[1] == box[5] && 
		box[5] == box[9] || box[3] == box[5] && box[5] == box[7])
        return 1;

    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] 
        != '7' && box[8] != '8' && box[9] != '9')

        return 0;
    else
        return  - 1;
}
 // table for game
int  table()
{
    system("cls");
	printf("%s 1 (X)  -  %s 2 (O)\n\n\n",name[0],name[1]);
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);
    printf("     |     |     \n\n");
	
}

int  game()
{
	
	int player = 1, i, choice10;
    char mark;
    
	printf("Enter Name of Player 1:  ");
    scanf("%s",name[0]);
    
	printf("Enter Name of Player 2:  ");
	scanf("%s",name[1]);
	
	system("cls");
    printf("Tic Tac Toe\n\nExit Key code is 111\nPress Enter....");
	
	getch();
	box[1]='1'; box[2]='2'; box[3]='3'; box[4]='4'; box[5]='5';	box[6]='6'; box[7]='7'; box[8]='8'; box[9]='9';
	do
    {
        table();
        player = (player % 2) ? 1 : 2;
        start:
        
		printf("%s %d, enter a number\a:  ",name[player-1], player);
        scanf("%d", &choice10);

        mark = (player == 1) ? 'X' : 'O';

        if (choice10 == 1 && box[1] == '1')
			box[1] = mark;
        else if (choice10 == 2 && box[2] == '2')
            box[2] = mark;
        else if (choice10 == 3 && box[3] == '3')
            box[3] = mark;
        else if (choice10 == 4 && box[4] == '4')
            box[4] = mark;
        else if (choice10 == 5 && box[5] == '5')
            box[5] = mark;
        else if (choice10 == 6 && box[6] == '6')
            box[6] = mark;
        else if (choice10 == 7 && box[7] == '7')
            box[7] = mark;
        else if (choice10 == 8 && box[8] == '8')
            box[8] = mark;
        else if (choice10 == 9 && box[9] == '9')
            box[9] = mark;
        else if(choice10 == 111)
        {
        	return 0;
        	box[1]='1'; box[2]='2'; box[3]='3'; box[4]='4'; box[5]='5';	box[6]='6'; box[7]='7'; box[8]='8'; box[9]='9';
		}
		else
        {
            printf("\aInvalid move ");
            player--;
            getch();
        }
        i = result();
        player++;
    }while (i ==  - 1);
    
    table();
    
	if (i == 1)
    {
        printf("\a%s win ",name[--player-1] );
	
        box[1]='1'; box[2]='2'; box[3]='3'; box[4]='4'; box[5]='5';	box[6]='6'; box[7]='7'; box[8]='8'; box[9]='9';
	}
    else
    {
    	box[1]='1'; box[2]='2'; box[3]='3'; box[4]='4'; box[5]='5';	box[6]='6'; box[7]='7'; box[8]='8'; box[9]='9';
        printf("==>\aGame draw");
	}

    getch();
}

void filing()
{
	
	system("cls");
	
	char name[20],task[50],describtion[200];
	struct date data;
	char yn[5];
	
	FILE *ptr;
	ptr=fopen("NOTE_PAD.txt","a");
	
	if(ptr==NULL)
	{
		printf("File does not exist");
	}
	
	else 
	{
		system("cls");
		
		printf("\n\nDate(D/M/Y):-");
		scanf("%d%*c%d%*c%d",&data.d,&data.m,&data.y);
		
		fflush(stdin);
		
		printf("%s", "\nName:-");
		scanf("%[^\n]%*c",name);
		
		fflush(stdin);
		
		printf("Task:-");
		scanf("%[^\n]%*c",task);
		
		fflush(stdin);
		
		printf("Description:-");
		scanf("%[^\n]%*c",describtion);
		
		fflush(stdin);

		fprintf(ptr,"\nDate:-  %d/%d/%d \n\n",data.d,data.m,data.y);
		fprintf(ptr,"Name:- %s",name);
		fprintf(ptr,"\nTask:- %s",task);
		fprintf(ptr,"\nDescription:- %s",describtion);
		
		fclose(ptr);
		
	}
	
	
	

}

int calculator()
{
	int a,b;
	char op;
	
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	printf("enter operator");
	scanf(" %c", &op);
	
	switch(op)
	{
		case '+':
			add(a,b);
		break;
		case'-':
	    	sub(a,b);
		break;
		case'*':
			multiply(a,b);
		break;
		case'/':
			division(a,b);
		break;
		default:
			printf("invalid");
		
	}
}

int add(int a,int b)
{
	printf("%d+%d=%d",a,b,a+b);
	return a+b;
}

int sub(int a,int b)
{
	printf("%d-%d=%d",a,b,a-b);
	return a-b;
}

int multiply(int a,int b)
{
	printf("%d*%d=%d",a,b,a*b);	
	return a*b;
}

float division(float a,float b)	
{
	printf("%.2f/%.2f=%.2f",a,b,a/b);
	return a/b;
}

int ID_CARDS()
{	
	struct data pp;
	int i;
	FILE *p;
	p=fopen("ID Card.txt","a");
	if(p==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		
			printf("Enter the name: ");
			scanf("%s",pp.name);
			
			fflush(stdin);
		
			printf("Enter the Father name: ");
			scanf("%s",pp.f_name);
		
			fflush(stdin);
		
			printf("Enter the age: ");
			scanf("%d",&pp.age);
		
			fflush(stdin);
			
			printf("Enter the University name: ");
			scanf("%s",pp.u_name);
			
			fflush(stdin);
		
			printf("Enter the Address: ");
			scanf("%s",pp.adress);
		
			fflush(stdin);
		
			printf("Enter the starting Date: ");
			scanf("%d%*c%d%*c%d",&pp.d,&pp.m,&pp.y);
			
			fflush(stdin);
		
			printf("Enter the Ending date: ");
			scanf("%d%*c%d%*c%d",&pp.e_d,&pp.e_m,&pp.e_y);
			
			fflush(stdin);
			
//			while(!feof(stdin))
			{
				
				for(i=0;i<30;i++)
					fprintf(p,"%c",221);
				fprintf(p,"\n|Name  :- %s\n"
						  "|F_Name:- %s\n"
						  "|Age   :- %d\n"
						  "|U_Name:- %s\n"
						  "|Adress:- %s\n"
						  "|S_Date:- %d/%d/%d\n"
						  "|E_Date:- %d/%d/%d\n",pp.name,pp.f_name,pp.age,pp.u_name,pp.adress,pp.d,pp.m,pp.y,pp.e_d,pp.e_m,pp.e_y);
				for(i=0;i<30;i++)
					fprintf(p,"%c",221);
				fprintf(p,"\n\n");
			}
			fclose(p);
	}
}

