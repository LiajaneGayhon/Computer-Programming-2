#include <stdio.h>
int auth(int db[3][2],int IDnumber, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(IDnumber == db[i][0] && pin == db[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int db[3][2] = {{0123,0123},{4567,4567},{6789,6789}};
    int IDnumber,pin;
    printf("Enter ID Number: ");
    scanf("%d",&IDnumber);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(auth(db,IDnumber,pin)){
        printf("You have successfully logged in\nID#:%d",IDnumber);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}
