#include <iostream>
#include<cstdlib>
#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cmath>
#include <ctime>
using namespace std;

void display(int arr[1000][1000]){
    cout<<"{"<<endl;
    for(int i=0; i<1000; ++i){
        cout<<"{";
        for(int j=0; j<1000; ++j){
            cout<<arr[i][j];
            if(j!=999) cout<<",";
        }
        cout<<"}"<<endl;
    }
    cout<<"}"<<endl;
}

int main(void){
    int arr[1000][1000];
    int a,b;
    int n=1000;
    float PI=3.1415926f;
    float R=10;
    //for(int x=100; x<1001; x+=100){
        for(int i=0; i<1000; ++i){
            for(int j=0; j<1000; ++j){
                arr[i][j]=-1;
            }
        }
        for(int i=0; i<999; ++i){
            arr[i][i]=0;
            arr[i][i+1]=1;
            arr[i+1][i]=1;
        }
        for(int i=0; i<1000; ++i){
            a=rand()%1000;
            b=rand()%1000;
            if(a!=b && arr[a][b]==-1){
                arr[a][b]=1;//y
                arr[b][a]=1;//y
            }
            else --i;
        }
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_POLYGON);
        for(int i=0; i<n; ++i){
            glVertex2f(R*cos(2*PI*i)/n , R*sin(2*PI*i)/n);
        }
        glEnd();
        glFlush();
    //}
    return 0;
}
