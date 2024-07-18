#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	char grade;
	printf("Enter the your marks :");
	scanf("%d",&marks);
	
	(marks>=80 && marks<=100)?grade='A':
		
	(marks>=60 && marks<=79)?grade='B':
		
	(marks>=45 && marks<=59)?grade='C':
		
	(marks>=33 && marks<=44)?grade='D':
	(marks>=0 && marks<=32)?grade='F':
	printf("Enter the valid marks");

switch(grade)
{
	case 'A':printf("your grade is A excellent work  !");
	break;
	case 'B':printf("your grade is B well done  ! ");
	break;
	case 'C':printf("your grade is C good job  !");
	break;
	case 'D':printf("your grade is D you can do better  !");
	break;
	case 'F':printf("you grade is F sorry you faild  !");
	break;
	
}
	if(grade=='A'||grade=='B'||grade=='C'||grade=='D')
	{
	printf("\nyou are aligibale for naxt leval");
	}
	else 
	{
	printf("\nyou are not aligibale for next leval");
	}						
}
