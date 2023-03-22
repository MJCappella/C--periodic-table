#include<stdio.h>
int main(){
	
	int i;
	
	//Displaying introduction.
    system("COLOR 3F");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\tA PROGRAM BY MICHAEL JAMES");
    Sleep(3000);
    system("cls");
    for(i=1;i<=100;++i)
    {
                       Sleep(5);
                       system("cls");
                       printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING ","i","%");
                       if(i==100)
                       Sleep(1000);
    }
    system("cls");
    
}
