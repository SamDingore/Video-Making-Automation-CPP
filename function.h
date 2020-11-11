/* A Work in Progress by Sam Dingore 2020 */

/* I had this idea about hyperlapse or animation,
 we can make a video from images but in order to
 make that we need to adjust each image in timneline,
 So i came up with idea that we can actually code
 it and make my own video editor/maker.*/




#include <iostream>
#include<stdlib.h>
#include <string.h>

#define MAX_SIZE 100

using namespace std;

class Queue {
private:
    int  i;
    string item;
    string arr_queue[MAX_SIZE];
    int rear;
    int front;

public:

    Queue() {
        rear = 0;
        front = 0;
    }

    /*program to enqueue*/

    void insert(string enter) {
        if (rear == MAX_SIZE)
            cout << "\n## Queue Reached Max!";
        else {

            cout << "\n## Position : " << rear + 1 << " , Insert Value  : " << enter;
            arr_queue[rear++] = enter;
        }
    }
    /*program for dequeue*/


    void removeData() {
        if (front == rear)
            cout << "\n## Queue is Empty!";
        else {
            cout << "\n## Position : " << front << " , Remove Value  :" << arr_queue[front];
            front++;
        }
    }
    /*this is just to check whether program is working not*/

    void display() {
        cout << "\n## Queue Size : " << (rear - front);
        for (i = front; i < rear; i++)
            cout << "\n## Position : " << i << " , Value  : " << arr_queue[i];
    }

/* My own function of changing names and creating
dynamic names*/
    void function(int sp){
      int i=0,j,k=1;
      char arr[100],newarr[100];

      int point,point2;
      point=10;
      point2=10;
      do{
        /*Program to store int to char so we can
        have ascending array*/
      for(j=0;point>0;j++){
           arr[j]=point%10 + '0';
           point = point/10;

          }
    point2 =point2+10;
    point=point2;

           arr[j]='\0';

           /*my own little version of storing a
           only two digits in a single string*/
                newarr[0]=arr[0];
                 newarr[1]=arr[1];
                 newarr[2]='\0';


             k=k+1+1;


                 /*program to create the file names*/
    char newName[100];
    char oldpath[]="./images/";
    char newpath[]="./images/img-";
    char extension[]=".png";
    char oldname[200];
    char finaloldname[200];
    char finalnewname[200];

          strcat(newarr, extension);
          strcat(newpath, newarr);
          strcpy(finalnewname,newpath);

 strcpy(newName,arr_queue[i].c_str());
strcat(oldpath,arr_queue[i].c_str());

strcpy(finaloldname,oldpath);




char ff[]="./images/sam.txt";
char ss[]="./images/rename.txt";

if (rename(finaloldname, finalnewname) == 0)
    {

      cout<<oldpath<<"renamed successfully.\n";
   }
  else
   {

      cout<<"Unable to rename  Please check files exist.\n";
   }

          i=i+1;


  } while(i<rear);

    }

    /* again a test program*/

 void Hello(string c){
   char copy[100];
   strcpy(copy, c.c_str());
cout<<copy<<endl;
}
/*Program to use FFMPEG functions*/

void Terminal( char framerate[100],  char videoname[1000]) {
   char Terminal[1000];
   char command[100];
   char middle[100];
   char extensionforvideo[100];
   strcpy(command,"ffmpeg -framerate ");
   strcat(command,framerate);
   strcpy(middle," -i ./images/img-%02d.png ./output/");
   strcat(command,middle);
   strcat(command,videoname);
   strcpy(extensionforvideo,".avi");
   strcat(command,extensionforvideo);
   printf("%s\n",command );
   system(command);
}


};

/* A Work in Progress by Sam Dingore 2020 */

/*
About: https://samdingore.now.sh
Instagram: https://www.instagram.com/sam.dingore/
Twitter: https://twitter.com/SamDingore
Github: https://github.com/SameerDingore
Snap me: https://www.snapchat.com/add/sameer_dingore */
