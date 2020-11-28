/*
*****Bus reservation System Using C++*****
 By Atin Mondal
 */


#include<bits/stdc++.h>

using namespace std;

static int p = 0;

class Bus

{

  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

public:

  void install();

  void allotment();

  void empty();

  void show();

  void avail();

  void position(int i);

}

bus[10];

void vline(char ch)

{

  for (int i=80;i>0;i--)

  cout<<ch;

}

void Bus::install()

{

  cout<<"Enter bus no-> ";

  cin>>bus[p].busn;

  cout<<"\nEnter Driver's name-> ";

  cin>>bus[p].driver;

  cout<<"\nArrival time-> ";

  cin>>bus[p].arrival;

  cout<<"\nDeparture time-> ";

  cin>>bus[p].depart;

  cout<<"\nFrom--> \t";

  cin>>bus[p].from;

  cout<<"\nTo--> \t";

  cin>>bus[p].to;

  bus[p].empty();

  p++;

}

void Bus::allotment()

{

  int seat;

  char number[5];

  start:

  cout<<"Bus no-->> ";

  cin>>number;

  
int i;
  for(i=0;i<=p;i++)

  {

    if(strcmp(bus[i].busn, number)==0)

    break;

  }

  while(i<=p)

  {

    cout<<"\nSeat Number: ";

    cin>>seat;

    if(seat>32)

    {

      cout<<"\n there are only 32 seats available in this bus. ";

    }

    else

    {

    if (strcmp(bus[i].seat[seat/4][(seat%4)-1], "Empty")==0)// seat[1][0]!=0;

      {

        cout<<"Enter passanger's name-> ";

        cin>>bus[i].seat[seat/4][(seat%4)-1];

        break;

      }

    else

      cout<<"The seat no is already reserved.\n";

      }

      }

    if(i>p)

    {

      cout<<"Enter correct bus no.\n";

      goto start;

    }

  }


void Bus::empty()

{

  for(int i=0; i<8;i++)

  {

    for(int j=0;j<4;j++)

    {

      strcpy(bus[p].seat[i][j], "Empty");

    }

  }

}

void Bus::show()

{

  int i;

  char number[5];

  cout<<"Enter bus no->> ";

  cin>>number;

  for(i=0;i<=p;i++)

  {

    if(strcmp(bus[i].busn, number)==0)

    break;

  }

while(i<=p)

{

  vline('#');

  cout<<"\nBus no--> \t"<<bus[i].busn

  <<"\nDriver--> \t"<<bus[i].driver<<"\tArrival time--> \t"

  <<bus[i].arrival<<"\tDeparture time--> \t"<<bus[i].depart

  <<"\nFrom: \t"<<bus[i].from<<"\t To: \t"<<

  bus[i].to<<"\n";

  vline('#');

  bus[0].position(i);

  int a=1;

  for (int j=0; j<8; j++)

  {

    for(int k=0;k<4;k++)

    {

      a++;

      if(strcmp(bus[i].seat[j][k]," Empty")!=0)

      cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<bus[i].seat[j][k]<<".";

    }

  }

  break;

  }

  if(i>p)

    cout<<"Enter correct bus no: ";

}

void Bus::position(int l)

{

  int s=0;p=0;

  for (int i =0; i<8;i++)

  {

    cout<<"\n";

    for (int j = 0;j<4; j++)

    {

      s++;

      if(strcmp(bus[l].seat[i][j], "Empty")==0)

        {

          cout.width(5);

          cout.fill(' ');

          cout<<s<<".";

          cout.width(10);

          cout.fill(' ');

          cout<<bus[l].seat[i][j];

          p++;

        }

        else

        {

        cout.width(5);

        cout.fill(' ');

        cout<<s<<".";

        cout.width(10);

        cout.fill(' ');

        cout<<bus[l].seat[i][j];

        }

      }

    }

  cout<<"\n\nThere are "<<p<<" seats empty in Bus No- "<<bus[l].busn;

  }

void Bus::avail()

{


  for(int n=0;n<p;n++)

  {

   

    cout<<"Bus no- \t"<<bus[n].busn<<"\nDriver- \t"<<bus[n].driver

    <<"\t\tArrival time- \t"<<bus[n].arrival<<"\tDeparture Time- \t"

    <<bus[n].depart<<"\nFrom- \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"

    <<bus[n].to<<"\n";

   


  }

}

int main()

{


//system("cls");

int w;

while(1)

{

    //system("cls");

  cout<<"\n\n\n\n";

  cout<<"\t1.Install\n\t"

  <<"2.Reservation\n\t"

  <<"3.Show\n\t"

  <<"4.Buses Available. \n\t"

  <<"5.Exit";

  cout<<"\n\tEnter your choice:-> ";

  cin>>w;

  switch(w)

  {

    case 1:  bus[p].install();

      break;

    case 2:  bus[p].allotment();

      break;

    case 3:  bus[0].show();

      break;

    case 4:  bus[0].avail();

      break;

    case 5:  exit(0);

  }

}

return 0;

}
