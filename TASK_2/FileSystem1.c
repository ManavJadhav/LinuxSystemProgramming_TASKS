#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BLOCKSIZE 1024
int main(int argc, char *argv[])
{
    int fd =0;
    int Ret=0;
    char Buffer[BLOCKSIZE];

    if(argc!=2)
    {
        printf("Insufficient Argumenst\n");
        printf("Usage: ./Executable_Name   Name_of_File\n");
        return -1;
    }

    fd=open(argv[1],O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to Open file\n");
    }
    
    while((Ret = read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        printf("Data from file is : %s\n",Buffer);
    }


    return 0;
}
