#include<stdio.h>
#include<string.h>

int main(){
    int soDong;
    FILE *fptr = fopen("bt05.txt","a");
    if(fptr==NULL){
        printf("Doc file that bai\n");
        return 1;
    }
    printf("Nhap so dong ban muon nha: ");
    scanf("%d",&soDong);
    getchar();
    for (int i = 0; i < soDong; i++) {
        char noiDung[2024];
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(noiDung, sizeof(noiDung), stdin);

        fputs(noiDung, fptr);
        
    }
    fclose(fptr);
    FILE *fptr1 = fopen("bt05.txt","r");
    if(fptr==NULL){
        printf("Doc file that bai\n");
        return 1;
    }
    char docChuoi[2024];
    printf("\nNoi dung trong file:\n");
    while (fgets(docChuoi, sizeof(docChuoi), fptr1) != NULL) {
        printf("%s", docChuoi);
    }

    fclose(fptr1);
    return 0;
}
