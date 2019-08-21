//this is a simple program for booking movie tickets

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int r,co,ar[10][10];
char cine[10][30],place[10][30],day[5][20];

struct seat
{int sno;
 int st;
 };seat sn[15];

struct customer
{char movie[20];
 char theatre[20];
 char day[10];
 float time;
 char name[5][20];
 int ncus;
 int phoneno;
 seat sn[15];
 int ps;
 char eaddress[40];
 int h;
 int u;
 };customer c[10];

void main()
{start:
 clrscr();
 int z=0;
 int i,ch,choi,np,nc,nd;
 cout<<"\nMenu \n1.Admin Menu \n2.User Menu \n3.Exit";
 do
 {cout<<"\nEnter your choice[1,2,3]";
 cin>>ch;
 switch(ch)
 {case 1:clrscr();
	 cout<<"***************************";
	 cout<<"\n     ADMIN MENU          ";
	 cout<<"\n***************************";
	 char pw[5];
	 cout<<"\nEnter password";
	 cin>>pw;
	 if(strcmp(pw,"*****")==0)
	 {
	  clrscr();
	  cout<<"\nMenu \n1.Enter details \n2.Insert \n3.Delete \n4.Return to main menu";
	  do
	  {
	  cout<<"\nEnter a choice";
	  cin>>choi;
	  switch(choi)
	  {case 1:clrscr();
		  cout<<"***************************";
		  cout<<"\n     ADMIN PAGE          ";
		  cout<<"\n***************************";
		  cout<<"\n Enter details";
		  void enterd(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd);
		  enterd(cine,place,day,nc,np,nd);
		  break;
	   case 2:clrscr();
		  int categ;
		  cout<<"***************************";
		  cout<<"\n     ADMIN PAGE          ";
		  cout<<"\n***************************";
		  void ins(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd);
		  ins(cine,place,day,nc,np,nd);
		  break;
	   case 3:clrscr();
		  cout<<"***************************";
		  cout<<"\n     ADMIN PAGE          ";
		  cout<<"\n***************************";
		  void del(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd);
		  del(cine,place,day,nc,np,nd);
		  break;
	   case 4:goto start;
	  }
	  }
	  while(choi!=0);
	  }
	  else
	  cout<<"\nWrong Password";
	  break;
case 2:   clrscr();
	  prestart:
	  cout<<"*************************\n";
	  cout<<"       USER MENU         ";
	  cout<<"\n*************************";
	  cout<<"\n1.New Booking \n2.Confirmation of booking \n3.Modify booking \n4.Cancel booking \n5.Back to Main Menu";
	  do
	  {
	  cout<<"\nEnter a choice";
	  cin>>ch;
	  for(int i=0;i<10;i++)
	  clrscr();
	  switch(ch)
	  {case 1:int ps;
                  void newbook(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd,int d);
		  cout<<"\n-----------------------";
		  cout<<"\n"<<"       USER MENU       ";
		  cout<<"\n-----------------------";
		  cout<<"\n"<<"\n";
		  z++;
		  newbook(cine,place,day,nc,np,nd,z);
                  void seating(int ps,int z);
		  cout<<"\n"<<"-----------------------------";
		  cout<<"\n"<<"          USER MENU          ";
		  cout<<"\n"<<"-----------------------------";
		  cout<<"\n"<<"\n";
		  cout<<"\n"<<"enter the number of persons";
		  cin>>ps;
		  seating(ps,z);
		  cout<<"\n"<<"The cost per person = dhs.35";
		  clrscr();
		  cout<<"\n"<<"-----------------------------";
		  cout<<"\n"<<"         USER MENU           ";
		  cout<<"\n"<<"-----------------------------";
		  cout<<"\n";
		  cout<<"\n"<<"The total cost you have to pay for"<<ps<<"persons ="<<ps*35;
		  cout<<"\n"<<"Do you want to continue booking (YES/NO)";
		  int ph;
		  cout<<"\n"<<"Enter your choice(1or2)"<<" ";
		  cin>>ph;
		  clrscr();
		  switch(ph)
		  {case 1:int y;
			  cout<<"\n"<<"-------------------------------";
			  cout<<"\n"<<"           USER MENU           ";
			  cout<<"\n"<<"-------------------------------";
			  cout<<"\n"<<"Enter the reqired details\n";
			  cout<<"Enter the name ofcustomer ";
			  for(y=0;y<ps;y++)
			  gets(c[z].name[y]);
			  cout<<"\n"<<"Enter the customer phone no";
			  cin>>c[z].phoneno;
			  cout<<"\n"<<"Enter the customer emailaddress";
			  gets(c[z].eaddress);
                          cout<<"\nDo you want to cancel or confirm the booking?\n";
			  goto prestart;

		 case 2: int fg;
			 cout<<"\n"<<"Go to main menu or Go back to user menu";
			 cout<<"\n"<<"Enter your choice(1or2)";
			 cin>>fg;
			 if(fg==1)
			 goto start;
			 else
			 goto prestart;
			 }
	    case 2:int y;
                   clrscr();
		   cout<<"\n"<<"************************************";
		   cout<<"\n"<<"    CONFIRMATION OF BOOKING         ";
		   cout<<"\n"<<"************************************";
                   cout<<"\n\nPLEASE NOTE THAT YOUR CUSTOMER ID IS [0"<<z<<"] FOR FUTURE REFERENCE\n";
			  for(y=0;y<ps;y++)
			  {cout<<"\nName of the person "<<y+1;
			  puts(c[z].name[y]);}
			  cout<<"\n"<<"MOVIE:";
			  puts(c[z].movie);
			  cout<<"\n"<<"CINEMA:";
			  puts(c[z].theatre);
                          cout<<"\n"<<"SEAT NO:";
			  for(int m=0;m<ps;m++)
                          cout<<"\n"<<c[z].sn[m].sno;
			  cout<<"\n"<<"PHONENO:"<<c[z].phoneno;
			  cout<<"\n"<<"EMAIL ADDRESS:";
			  puts(c[z].eaddress);
                          cout<<"\nTime"<<c[z].time;
			  cout<<"\n";
			  goto prestart;

           case 3:void modify(int ps,int z);
                  char sure[10];
                  cout<<"*************************\n";
                  cout<<"       MODIFICATION        ";
                  cout<<"\n*************************";
                  cout<<"\nDo you want to modify(yes or no)?";
                  gets(sure);
                  if(strcmp(sure,"yes")==0)
                  modify(ps,z);
                  else if (strcmp(sure,"no")==0)
                  goto prestart;
                  break;

           case 4:char sur[10];
                  int cus;
                  void cancel(int z,int cus,int ps);
                  cout<<"\nEnter the customer id";
                  cin>>cus;
                  cout<<"\nAre you sure you want to cancel your booking(yes or no)";
                  gets(sur);
                  if(strcmp(sur,"yes")==0)
                  cancel(z,cus,ps);
                  else if(strcmp(sur,"no")==0)
                  goto prestart;
                  break;

	   case 5:goto start;
	      }
	      }
	      while(ch!=0);
	      break;

case 3:   exit(0);
}
}
while(ch!=0);
getch();
}

//function to enter details
void enterd(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd)
{int j;
 int a=1,b=1,c=1;
 cout<<"\n Enter number of movies";
 cin>>nc;
 cout<<"\nEnter the name of movies\n";
 for(j=0;j<nc;j++)
 {cout<<a++;
 cin>>cine[j];}
 cout<<"\nEnter number of places";
 cin>>np;
 cout<<"\nEnter the places\n";
 for(j=0;j<np;j++)
 {cout<<b++;
 cin>>place[j];}
 cout<<"\nEnter number of days";
 cin>>nd;
 cout<<"\nEnter the days\n";
 for(j=0;j<nd;j++)
 {cout<<c++;
 cin>>day[j];}
 cout<<"\nEnter number of rows and columns of the matrix\n";
 cin>>r>>co;
 cout<<"\nEnter the seating arrangement you wish for your customers\n";
 for(int m=0;m<r;m++)
 for(int n=0;n<co;n++)
 cin>>ar[m][n];
 }

//function to insert items in any category
void ins(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd)
{int k;
 char categ[20];
 cout<<"\nEnter the category (movie/place/day)";
 cin>>categ;
 if(strcmp(categ,"movie")==0)
 {cout<<"\nEnter the name of the movie to be inserted";
 cin>>cine[nc];
 cout<<"the new list of movie is";
 for(k=0;k<=nc;k++)
 cout<<"\n"<<cine[k];
 }
 else if(strcmp(categ,"place")==0)
 {cout<<"\nEnter the name of the place to be inserted";
 cin>>place[np];
 cout<<"the new list of place is";
 for(k=0;k<=np;k++)
 cout<<"\n"<<place[k];
 }
 else if(strcmp(categ,"day")==0)
 {cout<<"\nEnter the day to be inserted";
 cin>>day[nd];
 cout<<"the new list of day is";
 for(k=0;k<=nd;k++)
 cout<<"\n"<<day[k];
 }
 }

//function to delete items
void del(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd)
{int i,j;
 char del[30];
 char temp[20];
 cout<<"\nEnter what to delete";
 gets(del);
 char categ[20];

 cout<<"\nEnter the category (movie/place/day)";
 cin>>categ;
 if(strcmp(categ,"movie")==0)
 {for(i=0;i<=nc;i++)
 if(strcmp(cine[i],del)==0)
 {for(int j=i;j<=nc;j++)
  {strcpy(temp,cine[j]);
   strcpy(cine[j],cine[j+1]);
   }
   nc--;
   cout<<"\nThe edited list is";
   for(i=0;i<=nc;i++)
   cout<<"\n"<<cine[i];
   }
   }
 else if(strcmp(categ,"place")==0)
{ for(i=0;i<=np;i++)
 if(strcmp(place[i],del)==0)
 {for(int j=i;j<=np;j++)
  {strcpy(temp,place[j]);
   strcpy(place[j],place[j+1]);
   }
   np--;
   cout<<"\nThe edited list is";
   for(i=0;i<=np;i++)
   cout<<"\n"<<place[i];
   }
   }
else if(strcmp(categ,"day")==0)
{for(i=0;i<=nd;i++)
 if(strcmp(day[i],del)==0)
 {for(int j=i;j<=nd;j++)
  {strcpy(temp,day[j]);
   strcpy(day[j],day[j+1]);
   }
   nd--;
   cout<<"\nThe edited list is";
   for(i=0;i<=nd;i++)
   cout<<"\n"<<day[i];
   }
   }
}

//function to book new tickets
void newbook(char cine[10][30],char place[10][30],char day[5][20],int &nc,int &np,int &nd,int z)
{int j=1,h,u,s=1,o=1;
cout<<"\n"<<"choose your cinema"<<" ";
for( h=0;h<np;h++)
cout<<"\n"<<j++<<"."<<place[h];
cin>>c[z].theatre;
j=0;
cout<<"\n"<<"choose your movie"<<" ";
for(u=0;u<nc;u++)
cout<<"\n"<<s++<<"."<<cine[u];
cin>>c[z].movie;
cout<<"\n"<<"choose your day"<<" ";
for(u=0;u<nd;u++)
cout<<"\n"<<o++<<"."<<day[u];
cin>>c[z].day;
cout<<"\nChoose time\n1.First show '9.30a.m'\n2.Matinee Show '3.30 p.m' \n3.Second show '8.30 p.m'";
cin>>c[z].time;
}

//function to choose seats
void seating(int ps,int z)
{int m;
char i,j;
cout<<"\n"<<"''''''''''''''''''''''''''''''''''";
cout<<"\n"<<"       SEATING ARRANGEMENT        ";
cout<<"\n"<<"''''''''''''''''''''''''''''''''''";
cout<<"\n"<<"\n";
cout<<"0 denotes seat is unavailable\n";
 for(int p=0;p<r;p++)
{for(int n=0;n<co;n++)
 cout<<ar[p][n]<<"\t";
 cout<<"\n";
 }
cout<<"\n"<<"select your seat";
cout<<"\n";
for(m=0;m<ps;++m)
{cin>>c[z].sn[m].sno;
 c[z].sn[m].st=c[z].sn[m].sno;}
for(m=0;m<ps;m++)
{for (int q=0;q<r;q++)
for(int w=0;w<co;w++)
if(c[z].sn[m].sno==ar[q][w])
ar[q][w]=0;}
}

//function to cancel booking
void cancel(int z,int cus,int ps)
{int i,m;
 for(m=0;m<ps;++m)
 {for (int q=0;q<r;q++)
 for(int w=0;w<co;w++)
 if(ar[q][w]==0)
 ar[q][w]=c[cus].sn[m].st;
 break;
 }
 for( i=cus;i<z;i++)
 c[i]=c[i+1];
 cout<<"\nThe new customer list is";
 for(int j=1;j<z;j++)
 {for(int y=0;y<ps;y++)
 {cout<<"\nName of the person "<<y+1;
 puts(c[j].name[y]);}
 cout<<"\n"<<"MOVIE:";
 puts(c[j].movie);
 cout<<"\n"<<"CINEMA:";
 puts(c[j].theatre);
 cout<<"\n"<<"SEAT NO:";
 for(int m=0;m<ps;m++)
 cout<<"\n"<<c[j].sn[m].sno;
 cout<<"\n"<<"PHONENO:"<<c[z].phoneno;
 cout<<"\n"<<"EMAIL ADDRESS:";
 puts(c[j].eaddress);
 cout<<"\nTime"<<c[j].time;
 cout<<"\n";
 }
 }

//function to modify booking
void modify(int ps,int z)
{ char mod[40],cat[40];
  int y,modi;
  float mo;
  cout<<"\nWhich catagory to modify?";
  cin>>cat;
  if(strcmp(cat,"place")==0||strcmp(cat,"cinema")==0||strcmp(cat,"day")==0||strcmp(cat,"eaddress")==0)
  {cout<<"\nEnter what you want you want to modify with";
  gets(mod);}
  else if(strcmp(cat,"phoneno")==0)
  {cout<<"\nEnter what you want to modify with";
  cin>>modi;}
  else if(strcmp(cat,"time")==0)
  {cout<<"\nEnter what you want to modify with";
  cin>>mo;}
  cout<<"\nEnter the customer id";
  cin>>y;
   if(strcmp (cat,"place")==0)
    strcpy(c[y].theatre,mod);
   if(strcmp(cat,"cinema")==0)
    strcpy(c[y].movie,mod);
   if(strcmp(cat,"day")==0)
    strcpy(c[y].day,mod);
   if(strcmp(cat,"phoneno")==0)
    c[y].phoneno=modi;
   if(strcmp(cat,"time")==0)
    c[y].time=mo;
   if(strcmp(cat,"eaddress")==0)
     strcpy(c[y].eaddress,mod);
  clrscr();
 cout<<"\nThe modified booking is";

 for(int x=0;x<ps;x++)
 {cout<<"\nNAME of person "<<x+1;
 puts(c[y].name[x]);}
 cout<<"\n"<<"MOVIE:";
 puts(c[y].movie);
 cout<<"\n"<<"CINEMA:";
 puts(c[y].theatre);
 cout<<"\n"<<"SEAT NO:";
 for(int m=0;m<ps;m++)
 cout<<"\n"<<c[y].sn[m].sno;
 cout<<"\n"<<"PHONENO:"<<c[z].phoneno;
 cout<<"\n"<<"EMAIL ADDRESS:";
 puts(c[y].eaddress);
 cout<<"\nTime"<<c[y].time;
 cout<<"\n";
 }
//End of program



























