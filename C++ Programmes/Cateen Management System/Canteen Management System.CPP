

 
/*		     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
		     & COMPUTER SCIENCE PROJECT WORK&
		     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
 
	      SOFTWARE FOR THE USE OF CANTEEN DEPARTMENT
 
////INTRODUCTION////
/////////////////////////////
//NAME:- GOURAV.K.CHOUDHARY /
//CLASS:- XI 'D'            /
//ROLL NO.:- 33             /
/////////////////////////////
####################
#CANTEEN MANAGEMENT#
####################        */
 
/*## HEADER FILES ##*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>

main()
 {
  clrscr();
  unsigned int sum,add,d,i,j,e,f,g,h,k,l,w,x,y,z;
  unsigned int bir=10,per=36,der=110,mur=8,par=110,cor=90,twr=1199, lur=17,tir=107,
	       rer=1499;
  int qubis=1000,abis=0,qupep=1000,apep=0,quden=110,aden=0,qumun=1000,amun=0,quperk=500,aperk=0,qucoc=400,acoc=0,qutit=100,atit=0,qulux=1000,alux=0,qutid=1000,atid=0,quree=300,aree=0;
  unsigned int m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
  char name[50],rank[10],pu,c[20],a[15],b[15],ok;
  clrscr();
 printf("\n +++++++++++++++++++++++++++++++++++++++*++++++++++++++++++++++++++++++++++++++");
 printf("\n +                                     ***                                    +");
 printf("\n +                                    *****                                   +");
 printf("\n +                                   *******                                  +");
 printf("\n +                                  *********                                 +");
 printf("\n +                                 ***********                                +");
 printf("\n +                                *************                               +");
 printf("\n +                               ***************                              +");
 printf("\n +                              *****************                             +");
 printf("\n +                             *******************                            +");
 printf("\n +                            *********************                           +");
 printf("\n +                           ***********************                          +");
 printf("\n +                          *************************                         +");
 printf("\n +                         ***************************                        +");
 printf("\n +                        *****************************                       +");
 printf("\n +                       *******************************                      +");
 printf("\n +                      *********************************                     +");
 printf("\n +                     ***********************************                    +");
 printf("\n +                    *************************************                   +");
 printf("\n +                   ***************************************                  +");
 printf("\n +                  *****************************************                 +");
 printf("\n +                 *******************************************                +");
 printf("\n +                *********************************************               +");
 printf("\n +               ***********************************************              +");
 printf("\n +              *************************************************             +");
 printf("\n +             *********************WELCOME***********************            +");
 printf("\n +              *************************************************             +");
 printf("\n +               ***********************************************              +");
 printf("\n +                *********************************************               +");
 printf("\n +                 *******************************************                +");
 printf("\n +                   ***************************************                  +");
 printf("\n +                    *************************************                   +");
 printf("\n +                     ***********************************                    +");
 printf("\n +                      *********************************                     +");
 printf("\n +                       *******************************                      +");
 printf("\n +                        *****************************                       +");
 printf("\n +                         ***************************                        +");
 printf("\n +                          *************************                         +");
 printf("\n +                           ***********************                          +");
 printf("\n +                            *********************                           +");
 printf("\n +                             *******************                            +");
 printf("\n +                              *****************                             +");
 printf("\n +                               ***************                              +");
 printf("\n +                                *************                               +");
 printf("\n +                                 ***********                                +");
 printf("\n +                                  *********                                 +");
 printf("\n +                                   *******                                  +");
 printf("\n +                                    *****                                   +");
 printf("\n +                                     ***   BY:-  iCBSE.com            +");
 printf("\n +++++++++++++++++++++++++++++++++++++++*++++++++++++++++++++++++++++++++++++++");
  getch();
  clrscr();
  cout<<"\n\n\t      w             w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w      w      w    e                  l            ";
  cout<<"\n\n\t      w     w w     w    e                  l            ";
  cout<<"\n\n\t      w    w   w    w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w   w     w   w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w  w       w  w    e                  l            ";
  cout<<"\n\n\t      w w         w w    e                  l            ";
  cout<<"\n\n\t      w             w    e e e e e e e e    l l l l l l l l";
  cout<<"\n\n\n\n   c c c c c c c      o o o o o o o     m               m    e e e e e e e e   ";
  cout<<"\n\n  c                  o             o    m m           m m    e  ";
  cout<<"\n\n  c                  o             o    m  m         m  m    e     ";
  cout<<"\n\n  c                  o             o    m   m       m   m    e e e e e e e e      ";
  cout<<"\n\n  c                  o             o    m    m     m    m    e e e e e e e e    ";
  cout<<"\n\n  c                  o             o    m     m   m     m    e      ";
  cout<<"\n\n  c                  o             o    m      m m      m    e     ";
  cout<<"\n\n   c c c c c c c      o o o o o o o     m       m       m    e e e e e e e e    ";
  getch();
  clrscr();
  main:;
  cout<<"\n\n\n\t\t\t     AFFWA CANTEEN MANAGEMENT";
      cout<<"\n\n\nCONSUMER INFORMATION";
      cout<<"\n\n\n\n NAME:";
      gets(name);
      cout<<"\n RANK:";
      gets(rank);
      cout<<"\n SERVICE NO.:";
      cin>>a;
      cout<<"\n SMART CARD NO.:";
      cin>>b;
      cout<<"\n PHONE NO.:";
      cin>>c;
      cout<<"\n ENTER BILL NO.:";
      cin>>i;
      again:;
      clrscr();
      cout<<"\n\n\n\n\1.MENU & PURCHASE";
      cout<<"\n\n\n\2.DETAILS";
      cout<<"\n\n\n\3.NEW CUSTOMER";
      cout<<"\n\n\n\4.QUANTITY AVAILABLE";
      cout<<"\n\n\n\5.EXIT";
      cout<<"\n\n\nENTER YOUR CHOICE:";
      cin>>d;
      clrscr();
  switch(d)
  {
     case 1:
      cout<<"\nITEMS\t\t\t\t\t\t\t      RATE(RS)";
      cout<<"\n\n\nBISCUTE\t\t\t\t\t\t\t\t10  ";
      cout<<"\n\nPEPSODENT\t\t\t\t\t\t\t36";
      cout<<"\n\nDENIM POWDER\t\t\t\t\t\t\t110   ";
      cout<<"\n\nMUNCH\t\t\t\t\t\t\t\t8  ";
      cout<<"\n\nPARK AVENUE PERFUME\t\t\t\t\t\t110   ";
      cout<<"\n\nCOCONUT HAIR OIL\t\t\t\t\t\t90  ";
      cout<<"\n\nTITAN WATCH\t\t\t\t\t\t\t1199   ";
      cout<<"\n\nLUX SOAP\t\t\t\t\t\t\t17   ";
      cout<<"\n\nTIDE\t\t\t\t\t\t\t\t107   ";
      cout<<"\n\nREEBOK SHOES\t\t\t\t\t\t\t1499   ";
      start:
      cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
      cin>>pu;
	if(pu=='Y'||pu=='y')
	{switch(pu)
	 case 1:
	  clrscr();
	  cout<<"\n\n\n\t\t\t\tPURCHASE LIST";
	  bis:;
	  cout<<"\nBISCUTE(MAX 30): ";
	  cin>>m;
 
	  if(m>30)
	  {
	   cout<<"Enter Quantity Smaller than 30";
	  getch();
	  goto bis;
	  }
	  else
	  abis=qubis-m;
	  pep:;
	  cout<<"\nPEPSODENT(MAX 2): ";
	  cin>>n;
	   if(n>2)
	  {
	   cout<<"Enter Quantity Smaller than 2";
	  getch();
	  goto pep;
	  }
	  else
	  apep=qupep-n;
	  den:;
	  cout<<"\nDENIM POWDER(MAX 2): ";
	  cin>>o;
	  if(o>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto den;
	  }
	  else
	  aden=quden-o;
	  mun:;
	  cout<<"\nMUNCH(MAX 50): ";
	  cin>>p;
 
	  if(p>50)
	  {
	   cout<<"Enter Quantity Smaller then 50";
	  getch();
	  goto mun;
	  }
	  else
	  amun=qumun-p;
	  park:;
	  cout<<"\nPARK AVENUE PERFUME(MAX 2): ";
	  cin>>q;
 
	  if(q>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto park;
	  }
	  else
	  aperk=quperk-q;
	  coco:;
	  cout<<"\nCOCONUT HAIR OIL(MAX 2): ";
	  cin>>r;
 
	  if(r>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto coco;
	  }
	  else
	  acoc=qucoc-r;
	  titan:;
	  cout<<"\nTITAN WATCH(MAX 2): ";
	  cin>>s;
 
	  if(s>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
 
	  goto titan;
	  }
	  else
	  atit=qutit-s;
	  lux:;
	  cout<<"\nLUX SOAP(MAX 10): ";
	  cin>>t;
 
	  if(t>10)
	  {
	   cout<<"Enter Quantity Smaller then 10";
	  getch();
	  goto lux;
	  }
	  else
	  alux=qulux-t;
	  tid:;
	  cout<<"\nTIDE(MAX 2): ";
	  cin>>u;
 
	  if(u>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto tid;
	  }
	  else
	  atid=qutid-u;
	  ree:;
	  cout<<"\nREEBOK SHOES(MAX 4): ";
	  cin>>v;
 
	  if(v>4)
	  {
	   cout<<"Enter Quantity Smaller then 4";
	  getch();
	  goto ree;
	  }
	  else
	  aree=quree-v;
	  cout<<"\n";
	  clrscr();
	  cout<<"\n\n\n\n\n\n\t\t\t\tAFFWA CANTEEN\n";
	  cout<<"\n\n\t\t\t\t  CASH MEMO\n";
	  cout<<"\n\nBILL NO.:"<<i;
	  cout<<"\n\nNAME:";
	  cout<<name;
	  cout<<"\n\nRANK:"<<rank;
	  cout<<"\n\nSERVICE NO.:"<<a;
	  cout<<"\n\nSMART CARD NO.:"<<b;
	  cout<<"\n\nPHONE NO.:"<<c;
	  cout<<"\n\n\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
	  cout<<"===============================================================================";
	  if(m>0)
	    cout<<"\n\nBISCUTE"        <<setw(38)<<m<<setw(28)<<"Rs."<<m*bir;
	  if(n>0)
	    cout<<"\n\nPEPSODENT"        <<setw(36)<<n<<setw(28)<<"Rs."<<n*per;
	  if(o>0)
	    cout<<"\n\nDENIM POWDER"     <<setw(33)<<o<<setw(28)<<"Rs."<<o*der;
	  if(p>0)
	    cout<<"\n\nMUNCH"            <<setw(40)<<p<<setw(28)<<"Rs."<<p*mur;
	  if(q>0)
	    cout<<"\n\nPARK AVENUE PERFUME"<<setw(26)<<q<<setw(28)<<"Rs."<<q*par;
	  if(r>0)
	    cout<<"\n\nCOCONUT HAIR OIL" <<setw(29)<<r<<setw(28)<<"Rs."<<r*cor;
	  if(s>0)
	    cout<<"\n\nTITAN WATCH"      <<setw(34)<<s<<setw(28)<<"Rs."<<s*twr;
	  if(t>0)
	    cout<<"\n\nLUX SOAP"         <<setw(37)<<t<<setw(28)<<"Rs."<<t*lur;
	  if(u>0)
	    cout<<"\n\nTIDE"             <<setw(41)<<u<<setw(28)<<"Rs."<<u*tir;
	  if(v>0)
	    cout<<"\n\nREEBOK SHOES"     <<setw(33)<<v<<setw(28)<<"Rs."<<v*rer;
		e=m*bir;
		f=n*per;
		g=o*der;
		h=p*mur;
		k=q*par;
		l=r*cor;
		w=s*twr;
		x=t*lur;
		y=u*tir;
		z=v*rer;
		sum=e+f+g+h+k+l+w+x+y+z;
		add=m+n+o+p+q+r+s+t+u+v;
	    cout<<"\n===============================================================================";
	    cout<<"\nTOTAL:"<<setw(40)<<add<<setw(27)<<"Rs."<<sum;
	    cout<<"\n\nTHANK YOU .\t\t\t     VISIT US AGAIN\n";
	getch();
	clrscr();
	goto again;
	}
	else
	{goto again;
 
	}
 
 
	case 2:
	cout<<"\n\n\n\n\n\t\t\t\tCANTEEN DETAILS";
	cout<<"\n\n#TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 PM";
	cout<<"\n\n#CANTEEN WILL CLOSED ON TUESDAY";
	cout<<"\n\n#GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
	cout<<"\n\n#TAKE YOUR SMART CARD WITH YOU";
	cout<<"\n\n#COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
	cout<<"\n\n#DO NOT BREAK ANY CANTEEN ITEMS";
	getch();
	clrscr();
	goto again;
	case 3:
	goto main;
	case 4:
	   if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
	  {cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nBISCUTE"        <<setw(38)<<abis;
	  cout<<"\n\n\nPEPSODENT"        <<setw(36)<<apep;
	  cout<<"\n\n\nDENIM POWDER"     <<setw(33)<<aden;
	  cout<<"\n\n\nMUNCH"            <<setw(40)<<amun;
	  cout<<"\n\n\nPARK AVENUE PERFUME"<<setw(26)<<aperk;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<acoc;
	  cout<<"\n\n\nTITAN WATCH"      <<setw(34)<<atit;
	  cout<<"\n\n\nLUX SOAP"         <<setw(37)<<alux;
	  cout<<"\n\n\nTIDE"             <<setw(41)<<atid;
	  cout<<"\n\n\nREEBOK SHOES"     <<setw(33)<<aree;
	  cout<<"\n*******************************************************************************";
	  getch();
	  goto again;
	  }
	  else
	  {{cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nBISCUTE"        <<setw(38)<<qubis;
	  cout<<"\n\n\nPEPSODENT"        <<setw(36)<<qupep;
	  cout<<"\n\n\nDENIM POWDER"     <<setw(33)<<quden;
	  cout<<"\n\n\nMUNCH"            <<setw(40)<<qumun;
	  cout<<"\n\n\nPARK AVENUE PERFUME"<<setw(26)<<quperk;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<qucoc;
	  cout<<"\n\n\nTITAN WATCH"      <<setw(34)<<qutit;
	  cout<<"\n\n\nLUX SOAP"         <<setw(37)<<qulux;
	  cout<<"\n\n\nTIDE"             <<setw(41)<<qutid;
	  cout<<"\n\n\nREEBOK SHOES"     <<setw(33)<<quree;
	  cout<<"\n\n*******************************************************************************";
	  getch();
	  goto again;
 
	  }
	case 5:
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS\n\n\n\t\t\t\tPress any key to Exit.......";
	getch();
	exit(0);
	default:
		cout<<"Your choice is wrong";
	getch();
	goto again;
	 }
 //getch();
// return 0;
 }
 
}
