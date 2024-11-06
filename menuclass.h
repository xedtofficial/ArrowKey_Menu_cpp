#ifndef _MENUCLASS_XEDT_V1
#define _MENUCLASS_XEDT_V1

#include "iostream"
#include "string"
#include "windows.h"
#include "cstdio"
#include "vector"

using std::cout;
using std::cin;
using std::string;
using std::ios;
using std::vector;


class menu{
    private:
        vector <string> titleVector; //to saves the set titles in vector
        string header="";
        bool run=true; 

    public:
        int ModeToSet; // to get return-value
        void getTitle(){ // output function for all set titles
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, 112);
            cout<<titleVector[0];
            SetConsoleTextAttribute(hConsole, 7);
            for (int i = 1; i <= titleVector.size()-1; i++){
                cout<<"\n"<<titleVector[i];
            }
        }

        void setTitle(string &Title1){ // function stores string values in vector
            titleVector.push_back(Title1);
        }

        void setHeader(string &headerRec){
            header=headerRec;
        }

        int chooseTitle(){ //selection algorithm...only modify what is marked with MODIFY
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            int Titlecounter = 0;
            cout<<header; // header
            cout<<"\nChoose Mode (Arrowkeys, Enter with ->):\n"; // MODIFY for custom select-text
            getTitle();
            while (run){
                for (int i=0; i<256; i++){
                    if (GetAsyncKeyState(i)&0b1){
                        if (i==VK_DOWN){
                            system("cls");
                            cout<<header;
                            cout<<"\nChoose Mode (Arrowkeys, Enter with ->):\n"; // MODIFY for custom select-text
                            if (Titlecounter<titleVector.size()-1){
                                Titlecounter++;                        
                            }
                            for (int i = 0; i < Titlecounter; i++){
                                cout<<"\n"<<titleVector[i];
                            }
                            SetConsoleTextAttribute(hConsole,112); // MODIFY for custom text color
                                cout<<"\n"<<titleVector[Titlecounter];
                            SetConsoleTextAttribute(hConsole, 07); // MODIFY for custom text color
                            for (int i=Titlecounter+1; i <=titleVector.size()-1; i++){
                                cout<<"\n"<<titleVector[i];
                            }
                                                    
                        }else if (i==VK_UP){
                            system("cls");
                            cout<<header;
                            cout<<"\nChoose Mode (Arrowkeys, Enter with ->):\n"; // MODIFY for custom select-text
                            if (Titlecounter>0){
                                Titlecounter--;                        
                            }
                            for (int i = 0; i < Titlecounter; i++){
                                cout<<"\n"<<titleVector[i];
                            }
                            SetConsoleTextAttribute(hConsole, 112); // MODIFY for custom text color
                                cout<<"\n"<<titleVector[Titlecounter];
                            SetConsoleTextAttribute(hConsole, 07); // MODIFY for custom text color
                            for (int i=Titlecounter+1; i <=titleVector.size()-1; i++){
                                cout<<"\n"<<titleVector[i];
                            }
                        }else if (i==VK_RIGHT){ // MODIFY for custom 'select'-key
                            system("cls");
                            run=false;
                            return Titlecounter;
                        }else{
                            Sleep(500);
                        }
                    }                                           
                }               
            }                       
        }
};

#endif