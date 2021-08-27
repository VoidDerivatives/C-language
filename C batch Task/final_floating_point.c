#include<stdio.h>
#include<conio.h>
int main()
{
	int a[40],b[10],i,j,no=9;
	int sign_bit=0;
	int exponent=0;
	int mantissa,count;
	float fnumber,fnumber1,fnumber2,fnumber3;
	int inumber1,inumber2,inumber3;
	int binary;
	printf("enter the floating number:");
	scanf_s("%f",&fnumber);
	inumber1=fnumber;             
	inumber2=fnumber;            
	printf("%f\n",fnumber);
	if(fnumber<0)
	    a[0]=1;
	else
		a[0]=0;
    for(j=0;inumber1!=0;j++)      
	{
	    binary=inumber1%2;      
	         if(binary<0)             
	         {  
		           binary=binary*-1;
	         }
		inumber1=inumber1/2;
		b[j]=binary;
	}
	for(i=9;j>0;i++)
	{
		a[i]=b[j-1];
		j--;
	}
		count = i;
		fnumber1 = inumber2;                 
		fnumber1 = fnumber-fnumber1;             
	 do
	 {
		fnumber1 = fnumber1*2;          
		inumber3 = fnumber1; 
		a[i]=inumber3;
		if(a[i]<0)
		{
			a[i]=a[i]*-1;
		}
		fnumber3=inumber3;
		fnumber1=fnumber1-fnumber3;
		i++;
	 }
	 while(fnumber1!=0);
	 while(i<=32)
	 {
		 a[i]=0;
		 i++;
	 }
	    if(fnumber<1)
		{
			
			L1:if(a[count]==1)
			{
				count++;
				exponent++;
			}
			else
			{
				count++;
				exponent++;
				goto L1;
			}
			while(count<=32)    
			 {
				a[no]=a[count];
				count++;
				no++;
			 }
		}
		else
		{
			for(j=count-1;j>=9;j--)
			{
				count--;
                exponent++;
              }   
					L2:if(a[j]!=0)    
				 {
					exponent--;
					count++;
				}
				else
				{
					exponent--;
					count++;
					j++;
					goto L2;
				}
					 while(count<=32)
					   {
						   a[count-1]=a[count];
						   count++;
					   }
			}
		 if(fnumber<1)
		 {
			 exponent=127-exponent;
			 a[1]=0;
			 while(exponent!=0)
			 {
				 for(i=8;i>=2;i--)
				{
					binary=exponent%2;			 
					exponent=exponent/2;
					a[i]=binary;
				}
			 }
		 }
		 else
		 {
			 exponent=127+exponent;
			 while(exponent!=0)
			 {
				 for(i=8;i>=1;i--)
				{
					binary=exponent%2;			 
					exponent=exponent/2;
					a[i]=binary;
				}
			 }
		 }
		 printf("The floating point is store internally like this.....\n");
     	for(i=0;i<32;i++)
		{
			if(i==0)
				printf("|%d| ",a[i]);
			else if(i>9)
				printf("|%d|",a[i]);
			else if(i==8)
				printf("|%d| ",a[i]);
			else
				 printf("|%d|",a[i]);
		}
	_getch();
	 return 0;
}