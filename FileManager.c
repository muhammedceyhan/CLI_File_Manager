#include<stdio.h>
#include <dirent.h>
#include<string.h>

void printMenu(){
    printf("\n\n\n");
    printf("============CLI File Manager============ \n");
    printf("1- List the Files\n");
    printf("2- Create a file\n");
    printf("3- Delete a file\n");
    printf("4- Rename a file\n");
    printf("5-Quit \n");
}

void listFiles(){
    DIR *dir = opendir(".");
    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
}
void createFile(){
    char fileName[256];
    printf("Enter the file name: ");
    scanf("%255s", fileName);
    FILE *fptr;
    fptr = fopen(fileName, "a");
    fclose(fptr);
    printf("file created successfully");
}
void deleteFile(){
    char fileName[256];
    printf("Enter the name of the file that will be deleted: ");
    scanf("%255s", fileName);
    if(remove(fileName) == 0){
        printf("File deleted successfully! \n");
    }else{
        printf("File couldn't deleted \n");
    }
}
void renameFile(){
    char fileName[256];
    printf("Enter the name of the file that will be remamed: ");
    scanf("%255s", fileName);
    char newFileName[256];
    printf("Enter the new name: ");
    scanf("%255s", newFileName);
    if(rename(fileName,newFileName) == 0){
        printf("File renamed successfully! \n");
    }else{
        printf("File couldn't renamed \n");
    }
}

int main(){
    int choise = 0;
    int check = 0;
    while(1){
        printMenu();
        printf("Choose: ");
        check = scanf("%d", &choise);
        if(check != 1){
            printf("Invalid input, Try again.");
            continue;
        }
        switch (choise)
        {
        case 1:
            listFiles();
            break;
        case 2:
            createFile();
            break;
        case 3:
            deleteFile();
            break;
        case 4:
            renameFile();
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Invalid input, Try again.");
            continue;
        }
    }
    return 0;



    
}
