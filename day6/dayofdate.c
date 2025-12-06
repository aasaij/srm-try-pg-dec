//Program to display day of date
#include <stdio.h>
#include <stdbool.h>
int main(){
	int dd, mm, yy;
	bool valid = true;
	scanf("%d/%d/%d", &dd, &mm, &yy);
	//checking whether the date is valid or not
	if ( dd>31 || dd<1 || mm>12 || mm<1 || yy<1900)
		valid = false;
	else{
		switch(mm){
			case 4: case 6: case 9: case 11:
				if ( dd > 30)
					valid = false;
				break;
			case 2:
				if(yy % 400 ==0 || (yy%4 ==0 && yy % 100 !=0)){
					if ( dd > 29)
						valid = false;
				}
				else if ( dd > 28) valid = false;
		}
	}	
	if (valid){
		//Implementing zeller rule to find day of date
		int f, D, C;
		if (mm==1 ||mm == 2){
			mm+=10;
			yy--;
		}
		else
			mm=mm-2;
		D = yy % 100;
		C = yy / 100;		
		f = (dd + (13*mm-1)/5+D+D/4+C/4-2*C)%7;
		if ( f < 0) f = f+ 7;
		switch(f){
			case 0:
				printf("Sunday"); break;
			case 1:
				printf("Monday"); break;				
			case 2:
				printf("Tuesday"); break;				
			case 3:
				printf("Wednesday"); break;				
			case 4:
				printf("Thursday"); break;				
			case 5:
				printf("Friday"); break;				
			case 6:
				printf("Saturday"); break;				
		}
	}
	else{
		printf("Date is invalid");
	}
	return 0;
}