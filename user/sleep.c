// #include <unistd.h>
int main(int argc, char *argv[])
{
    if(argc <= 1){
        printf("please enter the time\n");
        exit(0);
    }
    printf("\n");
    int time = atoi(argv[1]);
    if(time < 0){
       printf("enter time error\n");
    }
    sleep(time);
    exit(0);
}
