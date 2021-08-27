/* copy rights :Aishwarya Bacche
   date        :27 JUNE 2020
*/

// my program is not working when floating number is increase by 3.4 * 10E 17 number


#include<stdio.h>

void DisplayArray(int a[]);
void SignBit(float,int a[]);
int IntergerToBinary(int a[],int b[],long long int);
void FractionPartToBinary(int ,float,int []);
int mantissaCountOfExponent(float,int,int a[]);
void Exponent(float FloatUserInput,int exponent,int a[]);

int main()
{
	int a[32],b[100],i;
	int exponent;
	float FloatUserInput = 3.4 * 10E17;
	long long int TranslateFloatToInt1;
	int count;

	printf("enter the floating number:");
	scanf("%f",&FloatUserInput);                      //5.75 	
	printf("%f\n",FloatUserInput);	

	SignBit(FloatUserInput,a);                           //call for SignBit
        if(FloatUserInput<0)
		FloatUserInput=-FloatUserInput;
	
	TranslateFloatToInt1=FloatUserInput;  
        i=IntergerToBinary(a,b,TranslateFloatToInt1);         //call for IntergerToBinary Conversion return i value
	count=i;
        FractionPartToBinary(i,FloatUserInput,a);
	exponent=mantissaCountOfExponent(FloatUserInput,count,a);
	printf("exponent is:%d\n",exponent);
        Exponent(FloatUserInput,exponent,a);
	DisplayArray(a);
	
	return 0;
}
void SignBit(float FloatUserInput,int a[32])
{
	if(FloatUserInput<0)            //if negative the sign bit is set otherwise not
	     	a[0]=1;
	else
		a[0]=0;
}
int IntergerToBinary(int a[32],int b[],long long int TranslateFloatToInt1)
{
	int i,j,binary;
	for(j=0;TranslateFloatToInt1!=0;j++)                 //interger number is converted into binary                     
	{
	    binary=TranslateFloatToInt1%2;      
	         if(binary<0)             
	         {  
		           binary=binary*-1;
	         }
		TranslateFloatToInt1=TranslateFloatToInt1/2;
		b[j]=binary;									 //it will store in b array 
	}       
	for(i=9;j>0;i++)									//it will properly stored in a array
	{
		a[i]=b[j-1];
		j--;
	}
	return i;
}
void  FractionPartToBinary(int i,float FloatUserInput,int a[32])             //fraction part convert into binary
{
	    	int count;
		long long int inumber1;
		long long int TranslateFloatToInt1;
		float FloatNumber1,FloatNumber2;
                                                         //count=i beacause fraction part is stored continously
        	TranslateFloatToInt1=FloatUserInput;			// integer = float       5 = 5.75
		FloatNumber1 = TranslateFloatToInt1;           //float=integer          5.00=5           
		FloatNumber1 = FloatUserInput-FloatNumber1;        //matissa        0.75=5.75-5.00                
	do                               //fraction part is converted into binary and it will stored continously with interger part
	 {
		FloatNumber1 = FloatNumber1*2;          
		inumber1 = FloatNumber1; 
		a[i]=inumber1;
		if(a[i]<0)
		{
			a[i]=a[i]*-1;								 // if binary number is negative it is converted into +ve 
		}
		FloatNumber2=inumber1;
		FloatNumber1=FloatNumber1-FloatNumber2;
		i++;
	 }while(FloatNumber1!=0);	     						//loop for increament 

	  while(i<=32)
	 {
		 a[i]=0;
		 i++;
	 }
}
int mantissaCountOfExponent(float FloatUserInput,int count,int a[32])
{
	int exponent=0,j;
	int no=9;
	if(FloatUserInput < 1)				// count number for exponent part if nagtive shifting righthand side
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
		while(count<=200)			//This part for shifting with the help for count variable  1.ffff...
		{
		    a[no]=a[count];
			count++;
			no++;
		 }
		return exponent;
	}	
	else						// count number for exponent part if positive shifing left hand side  
	{
			for(j=count-1;j>=9;j--)
			{
				count--;
                exponent++;
            }   
			L2:	if(a[j]!=0)    
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
			while(count<=32)						 // this is for proper shifting with the help for count variable    1.ffff....
			{
				a[count-1]=a[count];
				count++;
			}
			return exponent;
	}
}
void Exponent(float FloatUserInput,int exponent,int a[32])
	{
		int binary,i;
		 if(FloatUserInput<1)					    //repersentation of exponet part if user number is -ve (binary)
		 {
			 exponent=127 - exponent;
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
		 else										 //repersentation of exponet part if user number is -ve (binary)
		 {
			 exponent=127 + exponent;
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
	}
void DisplayArray(int a[32])
{
	int i;
	printf("The floating point is store internally like this.....\n");
    for(i=0;i<32;i++)							//display float number....
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
	printf("\n");
}
