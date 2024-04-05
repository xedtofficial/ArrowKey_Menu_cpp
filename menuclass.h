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
        string title1,title2,title3,title4,title5,title6; //add more variables + overloaded setTitle() functions for more titles
        vector <string> titleVector; //to saves the set titles in vector
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
        void setTitle(string Title1){ //overloaded functions to set title
            title1=Title1;
            titleVector.push_back(title1);
        }
        void setTitle(string Title1, string Title2){
            title1=Title1;
            titleVector.push_back(title1);
            title2=Title2;
            titleVector.push_back(title2); //saves the set titles in vector
        }
        void setTitle(string Title1, string Title2, string Title3){
            title1=Title1;
            titleVector.push_back(title1);
            title2=Title2;
            titleVector.push_back(title2);
            title3=Title3;
            titleVector.push_back(title3);
        }
        void setTitle(string Title1, string Title2, string Title3, string Title4){
            title1=Title1;
            titleVector.push_back(title1);
            title2=Title2;
            titleVector.push_back(title2);
            title3=Title3;
            titleVector.push_back(title3);
            title4=Title4;
            titleVector.push_back(title4);
        }
        void setTitle(string Title1, string Title2, string Title3, string Title4,string Title5){
            title1=Title1;
            titleVector.push_back(title1);
            title2=Title2;
            titleVector.push_back(title2);
            title3=Title3;
            titleVector.push_back(title3);
            title4=Title4;
            titleVector.push_back(title4);
            title5=Title5;
            titleVector.push_back(title5);
        }
        void setTitle(string Title1, string Title2, string Title3, string Title4,string Title5, string Title6){
            title1=Title1;
            titleVector.push_back(title1);
            title2=Title2;
            titleVector.push_back(title2);
            title3=Title3;
            titleVector.push_back(title3);
            title4=Title4;
            titleVector.push_back(title4);
            title5=Title5;
            titleVector.push_back(title5);
            title6=Title6;
            titleVector.push_back(title6);
        }

        int chooseTitle(){ //selection algorithm...only modify what is marked with MODIFY
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            int Titlecounter = 0;
            cout<<"\nChoose Mode (Arrowkeys, Enter with ->):\n"; // MODIFY for custom header-text
            getTitle();
            while (run){
                for (int i=0; i<256; i++){
                    if (GetAsyncKeyState(i)&0b1){
                        if (i==VK_DOWN){
                            system("cls");
                            cout<<"\nChoose Mode (Arrowkeys, Enter with ->):\n"; // MODIFY for custom header-text
                            if (Titlecounter<titleVector.size()-1){
                                Titlecounter++;                        
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
                                                    
                        }else if (i==VK_UP){
                            system("cls");
                            cout<<"\nChoose Mode (Arrowkeys, Enter with ->):\n"; // MODIFY for custom header-text
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
