#include<stdio.h>
struct phitronstudent
{
    char name[50],email[50],date[20];
    float marks;
};
struct phitronstudent heros[1];
void display()
{
    int i;
    for ( i = 0; i <3; i++)
    {
        printf("\ninformation for hero %d\n",i+1);
        printf("Name: %s\n",heros[i].name);
        printf("Email: %s\n",heros[i].email);
        printf("Date: %s\n",heros[i].date);
        printf("Marks : %.2f\n",(heros[i].marks*0.8));
        
    }
    printf("\n");

}
int main()
{
    int i;  
    for ( i = 0; i < 3; i++)
    {
        printf("Enter information for hero %d: \n",i+1);
        printf("Enter name: \n");
        fflush(stdin);
       gets(heros[i].name);
       printf("Enter email: \n");
       gets(heros[i].email);
       printf("Enter date: \n");
       gets(heros[i].date);
       printf("Enter marks: \n");
       scanf("%f",&heros[i].marks);
    }
    printf("\n");
    display();
    
    
     
    return 0;
}