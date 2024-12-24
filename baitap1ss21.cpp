#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    FILE *fptr = fopen("bt01.txt","w");
    if(fptr==NULL){
        printf("Doc file that bai\n");
        return 1;
    }
    printf("Nhap chuoi can nhap vao file: ");
    fgets(arr,100,stdin);
    fputs(arr,fptr);
    printf("Doc file thanh cong");
    fclose(fptr);
    return 0;
}
