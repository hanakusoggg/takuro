#include<stdio.h>

struct formula{
	double x;
	double y;
	double z;
	char ope1;
	char ope2;/Users/DandG/Desktop/cal/cal.c
};

void input(struct formula *temp);
double cal(struct formula *temp);

int main(void){
	struct formula temp;
	printf("CAUTION : saparate numbers and operator with SPACE \n");
	printf("Input the formula :");
	input(&temp);
	printf("%f %c %f %c %f = %f \n", temp.x, temp.ope1, temp.y, temp.ope2, temp.z, cal(&temp));
	return 0;
}

void input(struct formula *temp){
	scanf("%lf %c %lf %c %lf", &temp->x, &temp->ope1, &temp->y, &temp->ope2, &temp->z);
}

double cal(struct formula *temp){
	if(temp->ope1 == '+' && temp->ope2 == '+'){
	       return temp->x + temp->y + temp->z;
	}
	if(temp->ope1 == '+' && temp->ope2 == '-'){
	       return temp->x + temp->y - temp->z;
	}
	if(temp->ope1 == '+' && temp->ope2 == '*'){
	       return temp->x + temp->y * temp->z;
	}
	if(temp->ope1 == '+' && temp->ope2 == '/'){
	       return temp->x + temp->y / temp->z;
	}
	if(temp->ope1 == '-' && temp->ope2 == '+'){
	       return temp->x - temp->y + temp->z;
	}
	if(temp->ope1 == '-' && temp->ope2 == '-'){
	       return temp->x - temp->y - temp->z;
	}
	if(temp->ope1 == '-' && temp->ope2 == '*'){
	       return temp->x - temp->y * temp->z;
	}
	if(temp->ope1 == '-' && temp->ope2 == '/'){
	       return temp->x - temp->y / temp->z;
	}
	if(temp->ope1 == '*' && temp->ope2 == '+'){
	       return temp->x * temp->y + temp->z;
	}
	if(temp->ope1 == '*' && temp->ope2 == '-'){
	       return temp->x * temp->y - temp->z;
	}
	if(temp->ope1 == '*' && temp->ope2 == '*'){
	       return temp->x * temp->y * temp->z;
	}
	if(temp->ope1 == '*' && temp->ope2 == '/'){
	       return temp->x * temp->y / temp->z;
	}
	if(temp->ope1 == '/' && temp->ope2 == '+'){
	       return temp->x / temp->y + temp->z;
	}
	if(temp->ope1 == '/' && temp->ope2 == '-'){
	       return temp->x / temp->y - temp->z;
	}
	if(temp->ope1 == '/' && temp->ope2 == '*'){
	       return temp->x / temp->y * temp->z;
	}
	if(temp->ope1 == '/' && temp->ope2 == '/'){
	       return temp->x / temp->y / temp->z;
	}
}	
