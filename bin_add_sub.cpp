#include<iostream>
using namespace std;

void add(int b1[],int b2[],int b3[],int l,int n)
{
int c=0,i=0;

for(i=l-1;i>=0;i--)
   {
       b3[i]=b1[i]+b2[i]+c;
       if(b3[i]== 2)
        {b3[i]=0;
          c=1;
		 }
		else if(b3[i]==3)
		{
          b3[i]=1;
          c=1;
         }
		else
		 c=0;
   }
		if(n==1)
		   cout<<"\nThe addition is ";
        else
          cout<<"\nthe subtraction is ";

        for(i=0;i<l;i++)
		  {
			if(c==1&&n==1)
			{
			cout<<c;
			c=0;
			}
			cout<<b3[i];
           }

}

void twocomp(int b2[],int l)
{
int i=0;
for(i=l-1;i>=0;i--)
{if(b2[i]==1)
    break;
}
i--;
while(i>=0)
{ if(b2[i]==1)
   b2[i]=0;
 else
   b2[i]=1;
i--;
}
}


int main()
{
	int b1[10],b2[10],b3[10];
	int n,i,l,k;
	b3[0]=0;
	cout<<"\nenter the no. of bits:";
	cin>>l;
	k:cout<<"\nEnter the operation to be performed : \n1.Addition.\n2.subtraction.\n:";
	cin>>n;
	switch(n)
	{
		case 1:cout<<"\nenter the first number:";
	             for(i=0;i<l;i++)
	                cin>>b1[i];
               cout<<"\nenter the second number:";
	              for(i=0;i<l;i++)
	                 cin>>b2[i];
                add(b1,b2,b3,l,n);
				break;
		case 2: cout<<"\nenter the first number(unsigned):";
		        for(i=0;i<l;i++)
	                cin>>b1[i];
                cout<<"\nenter the second number(unsigned):";
	              for(i=0;i<l;i++)
	                 cin>>b2[i];
                cout<<"\nEnter:\n1.if 1st no.-ve.\n2.if 2nd no.-ve.\n3.if both -ve.\n4.if both +ve.\n:";
                cin>>k;
                switch(k)
                  {
                   case 1:twocomp(b1,l);
                          twocomp(b2,l);
                          break;
                   case 2:break;
                   case 3:twocomp(b1,l);
                          break;
                   case 4:twocomp(b2,l);
                          break;
                  }
	            add(b1,b2,b3,l,n);
				break;
        default:cout<<"\nInvalid input";
                goto k;
    }

	return 0;
}
