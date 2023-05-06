	
#1
Postado 31 de outubro de 2020
#include <windows.h>
#include <stdlib.h>

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

//função WinMain
int WINAPI WinMain (HINSTANCE hThisInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpszArgument,
                    int nFunsterStil)
{
    HWND hwnd;                                                          //handle
    MSG messages;                                                       //mensagem
    WNDCLASSEX wincl;                                                   //classe

    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = "WindowsApp";
    wincl.lpfnWndProc = WindowProcedure;
    wincl.style = CS_DBLCLKS;          
    wincl.cbSize = sizeof (WNDCLASSEX);
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);                     
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);                   
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);                       //cursor default
    wincl.lpszMenuName = NULL; 
    wincl.cbClsExtra = 0;  
    wincl.cbWndExtra = 0;
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;                    //cor do background

    if (!RegisterClassEx (&wincl))
        return 0;

    hwnd = CreateWindowEx (                                             //criar a janela
        0,                                                              
        "WindowsApp",        
        "Calculadora",                                                  //titulo da janela
        WS_OVERLAPPEDWINDOW,                                            //estilo da janela
        350,                                                            //X em relação ao desktop
        250,                                                            //y em relação ao desktop
        500,                                                            //largura da janela
        600,                                                            //altura da janela
        HWND_DESKTOP,                                                   
        NULL,              
        hThisInstance,      
        NULL                
        );

    ShowWindow (hwnd, nFunsterStil);                                    //mostrar a janela

    while (GetMessage (&messages, NULL, 0, 0))
    {
        TranslateMessage(&messages);
        DispatchMessage(&messages);
    }
    
    return messages.wParam;
}

/*
Parte 2 do Tut
*/
#define ID_BUTTON1 1001
#define ID_BUTTON2 1002
#define ID_BUTTON3 1003
#define ID_BUTTONdividir 1010
#define ID_BUTTON4 1004
#define ID_BUTTON5 1005
#define ID_BUTTON6 1006
#define ID_BUTTONvezes 1011
#define ID_BUTTON7 1007
#define ID_BUTTON8 1008
#define ID_BUTTON9 1009
#define ID_BUTTONmenos 1012
#define ID_BUTTONporcentagem 1013
#define ID_BUTTONponto 1014
#define ID_BUTTONmais 1015
#define ID_BUTTONigual 1016

HINSTANCE g_inst;
HWND EditTotal,Button1,Button2,Button3,ButtonDividir,Button4,Button5,Button6,ButtonVezes,Button7,Button8,Button9,ButtonMenos,ButtonPorcentagem,ButtonPonto,ButtonMais,ButtonIgual;

//esta função só serve para criar o conteudo dentro da janela principal (nao tem retorno)
//irá criar duas EDITs e 4 BUTTONS, e mudar os respectivos tipos de letra de cada um
void DesenharObjectos(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	EditTotal = CreateWindowEx (
        WS_EX_CLIENTEDGE,"EDIT", "",       
        WS_VISIBLE|WS_CHILD, 
        30, 30, 400, 150,                
        hwnd, NULL, g_inst, NULL );
        
    Button1 = CreateWindowEx (
        WS_EX_CLIENTEDGE,  
        "BUTTON",        
        "1",       
        WS_VISIBLE|WS_CHILD, 
        30, 200, 50, 50,                 
        hwnd,(HMENU)ID_BUTTON1,g_inst,NULL);
        
        Button2 = CreateWindowEx (
        WS_EX_CLIENTEDGE,  
        "BUTTON",        
        "2",       
        WS_VISIBLE|WS_CHILD, 
        90, 200, 50, 50,                
        hwnd,(HMENU)ID_BUTTON2,g_inst,NULL);
        
        Button3 = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "3",       
        WS_VISIBLE|WS_CHILD, 
        150, 200, 50, 50,             
        hwnd,(HMENU)ID_BUTTON3,g_inst,NULL);
        
        ButtonDividir = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "/",       
        WS_VISIBLE|WS_CHILD, 
        250, 200, 50, 50,             
        hwnd,(HMENU)ID_BUTTONdividir, g_inst, NULL);
         
		Button4 = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "4",       
        WS_VISIBLE|WS_CHILD, 
        30, 260, 50, 50,             
        hwnd, (HMENU)ID_BUTTON4,g_inst,NULL);
        
        Button5 = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "5",       
        WS_VISIBLE|WS_CHILD, 
        90, 260, 50, 50,
        hwnd,(HMENU)ID_BUTTON5,g_inst,NULL);
        
    Button6 = CreateWindowEx (
        WS_EX_CLIENTEDGE,"BUTTON", "6",       
        WS_VISIBLE|WS_CHILD, 
        150, 260, 50, 50,                
        hwnd,(HMENU)ID_BUTTON6,g_inst,NULL);
        
        ButtonVezes = CreateWindowEx (
        WS_EX_CLIENTEDGE,"BUTTON", "*",       
        WS_VISIBLE|WS_CHILD, 
        250, 260, 50, 50,                
        hwnd,(HMENU)ID_BUTTONvezes,g_inst, NULL );
    
    	Button7 = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "7",       
        WS_VISIBLE|WS_CHILD, 
        30, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTON7,g_inst,NULL);
        
        Button8 = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "8",       
        WS_VISIBLE|WS_CHILD, 
        90, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTON8,g_inst,NULL);
        
        Button9 = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "9",       
        WS_VISIBLE|WS_CHILD, 
        150, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTON9,g_inst,NULL);
        
        ButtonMenos = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "-",       
        WS_VISIBLE|WS_CHILD, 
        250, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTONmenos,g_inst,NULL);
        
        ButtonPorcentagem = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "%",       
        WS_VISIBLE|WS_CHILD, 
        30, 380, 50, 50,
        hwnd,(HMENU)ID_BUTTONporcentagem,g_inst,NULL);
        
        ButtonPonto = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        ".",       
        WS_VISIBLE|WS_CHILD, 
        90, 380, 50, 50,hwnd,(HMENU)ID_BUTTONponto,g_inst, NULL);
        
        ButtonMais = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "+",       
        WS_VISIBLE|WS_CHILD, 
        150, 380, 50, 50,
        hwnd,(HMENU)ID_BUTTONmais,g_inst,NULL);
        
        ButtonIgual = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "=",       
        WS_VISIBLE|WS_CHILD, 
        250, 380, 50, 50,
        hwnd,(HMENU)ID_BUTTONigual,g_inst,NULL);
        
    SendMessage((HWND) EditTotal,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button1,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);	  
           
    SendMessage((HWND) Button2,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);		
    SendMessage((HWND) Button3,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) ButtonDividir,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    
    SendMessage((HWND) Button4,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button5,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button6,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) ButtonVezes,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    
    SendMessage((HWND) Button7,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button8,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button9,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) ButtonMenos,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
	
	SendMessage((HWND) ButtonPorcentagem,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);  
	SendMessage((HWND) ButtonPonto,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
	
    SendMessage((HWND) ButtonMais,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);	
    SendMessage((HWND) ButtonIgual,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);               	
}

 //Parte 3 do Tut
int a = 1;
char s_valor1[20] = "0", s_valor2[20] = "0", s_total[20] = "0";
int valor1, valor2, total;

//função WindowProcedure
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_CREATE:
             //Parte 2 do Tut
             DesenharObjectos(hwnd,message,wParam,lParam);
        break;    
        case WM_COMMAND:
             /*
             Parte 3 do Tut
             */
              if ((HIWORD(wParam) == BN_CLICKED))
            {   
                switch (LOWORD(wParam))
                {
                    case ID_BUTTON1:  
                        Button1;
                    break;
                    case ID_BUTTON2:        
                        Button2;                     
                    break;
                    case ID_BUTTON3:        
                       Button3;                     
                    break;
                    case ID_BUTTONdividir:        
                        ButtonDividir;                     
                    break;
                    case ID_BUTTON4:  
                        Button4;
                    break;
                    case ID_BUTTON5:        
                        Button5;                     
                    break;
                    case ID_BUTTON6:        
                       Button6;                     
                    break;
                    case ID_BUTTONvezes:        
                        ButtonVezes;                     
                    break;
                    case ID_BUTTON7:  
                        Button7;
                    break;
                    case ID_BUTTON8:        
                        Button8;                     
                    break;
                    case ID_BUTTON9:        
                       Button9;                     
                    break;
                    case ID_BUTTONmenos:        
                        ButtonMenos;                     
                    break;
                    case ID_BUTTONporcentagem:  
                        ButtonPorcentagem;
                    break;
                    case ID_BUTTONponto:        
                        ButtonPonto;                     
                    break;
                    case ID_BUTTONmais:        
                       ButtonMais;                     
                    break;
                    case ID_BUTTONigual:        
                        ButtonIgual;                     
                    break;
                }
                SendMessage(
	                (HWND) EditTotal,
	                (UINT) WM_SETTEXT, 
	                (WPARAM) 0,
	                (LPARAM) &s_valor1
                    );
                SendMessage((HWND)valor1,(UINT)EM_GETLINE,(WPARAM)1,(LPARAM) &s_valor1); 
                     
                switch (LOWORD(wParam))
                {
                    case ID_BUTTON1:  
                        Button1;
                    break;
                    case ID_BUTTON2:        
                        Button2;                     
                    break;
                    case ID_BUTTON3:        
                       Button3;                     
                    break;
                    case ID_BUTTONdividir:        
                        ButtonDividir;                     
                    break;
                    case ID_BUTTON4:  
                        Button4;
                    break;
                    case ID_BUTTON5:        
                        Button5;                     
                    break;
                    case ID_BUTTON6:        
                       Button6;                     
                    break;
                    case ID_BUTTONvezes:        
                        ButtonVezes;                     
                    break;
                    case ID_BUTTON7:  
                        Button7;
                    break;
                    case ID_BUTTON8:        
                        Button8;                     
                    break;
                    case ID_BUTTON9:        
                       Button9;                     
                    break;
                    case ID_BUTTONmenos:        
                        ButtonMenos;                     
                    break;
                    case ID_BUTTONporcentagem:  
                        ButtonPorcentagem;
                    break;
                    case ID_BUTTONponto:        
                        ButtonPonto;                     
                    break;
                    case ID_BUTTONmais:        
                       ButtonMais;                     
                    break;
                    case ID_BUTTONigual:        
                        ButtonIgual;                     
                    break;
                }
                SendMessage((HWND)valor2,(UINT)EM_GETLINE,(WPARAM)1,(LPARAM) &s_valor2);
                 
               	valor1 = atoi(s_valor1);
                valor2 = atoi(s_valor2); 
                 
                switch (LOWORD(wParam))
                {
                    case ID_BUTTONmais:  
                        total = valor1+valor2;
                    break;
                    case ID_BUTTONmenos:        
                        total = valor1-valor2;                     
                    break;
                    case ID_BUTTONvezes:        
                       total = valor1*valor2;                     
                    break;
                    case ID_BUTTONdividir:        
                        total = valor1 / valor2;                     
                    break;
                }    //switch (LOWORD(wParam))
                
                itoa (total,s_total,10);
                     
                SendMessage(
	                (HWND) EditTotal,
	                (UINT) WM_SETTEXT, 
	                (WPARAM) 0,
	                (LPARAM) &s_total
                    );
                    
            }    //if ((HIWORD(wParam) == BN_CLICKED))
        break;
        case WM_DESTROY:
            PostQuitMessage (0);
        break;
        default:                     
            return DefWindowProc (hwnd, message, wParam, lParam);
    }//switch (message)
    return 0;
}
Ola, sou bem iniciante em programaçao queria saber se alguem poderia me dar uma ajuda to com esse código em que a janela e os botões ta tudo certo mas to com dificuldades na parte de comando, em que eu uso apenas uma editbox , e cada botao clicado apareça o numero e o operador escolido la e a apertar o botao "igual" venha o resultado como uma calculadora mesmo. alguem poderia me ajudar nessa parte do código uso o devc++.

<

#include <windows.h>
#include <stdlib.h>

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

//função WinMain
int WINAPI WinMain (HINSTANCE hThisInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpszArgument,
                    int nFunsterStil)
{
    HWND hwnd;                                                          //handle
    MSG messages;                                                       //mensagem
    WNDCLASSEX wincl;                                                   //classe

    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = "WindowsApp";
    wincl.lpfnWndProc = WindowProcedure;
    wincl.style = CS_DBLCLKS;          
    wincl.cbSize = sizeof (WNDCLASSEX);
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);                     
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);                   
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);                       //cursor default
    wincl.lpszMenuName = NULL; 
    wincl.cbClsExtra = 0;  
    wincl.cbWndExtra = 0;
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;                    //cor do background

    if (!RegisterClassEx (&wincl))
        return 0;

    hwnd = CreateWindowEx (                                             //criar a janela
        0,                                                              
        "WindowsApp",        
        "Calculadora",                                                  //titulo da janela
        WS_OVERLAPPEDWINDOW,                                            //estilo da janela
        350,                                                            //X em relação ao desktop
        250,                                                            //y em relação ao desktop
        500,                                                            //largura da janela
        600,                                                            //altura da janela
        HWND_DESKTOP,                                                   
        NULL,              
        hThisInstance,      
        NULL                
        );

    ShowWindow (hwnd, nFunsterStil);                                    //mostrar a janela

    while (GetMessage (&messages, NULL, 0, 0))
    {
        TranslateMessage(&messages);
        DispatchMessage(&messages);
    }
    
    return messages.wParam;
}

/*
Parte 2 do Tut
*/
#define ID_BUTTON1 1001
#define ID_BUTTON2 1002
#define ID_BUTTON3 1003
#define ID_BUTTONdividir 1010
#define ID_BUTTON4 1004
#define ID_BUTTON5 1005
#define ID_BUTTON6 1006
#define ID_BUTTONvezes 1011
#define ID_BUTTON7 1007
#define ID_BUTTON8 1008
#define ID_BUTTON9 1009
#define ID_BUTTONmenos 1012
#define ID_BUTTONporcentagem 1013
#define ID_BUTTONponto 1014
#define ID_BUTTONmais 1015
#define ID_BUTTONigual 1016

HINSTANCE g_inst;
HWND EditTotal,Button1,Button2,Button3,ButtonDividir,Button4,Button5,Button6,ButtonVezes,Button7,Button8,Button9,ButtonMenos,ButtonPorcentagem,ButtonPonto,ButtonMais,ButtonIgual;

//esta função só serve para criar o conteudo dentro da janela principal (nao tem retorno)
//irá criar duas EDITs e 4 BUTTONS, e mudar os respectivos tipos de letra de cada um
void DesenharObjectos(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    EditTotal = CreateWindowEx (
        WS_EX_CLIENTEDGE,"EDIT", "",       
        WS_VISIBLE|WS_CHILD, 
        30, 30, 400, 150,                
        hwnd, NULL, g_inst, NULL );
        
    Button1 = CreateWindowEx (
        WS_EX_CLIENTEDGE,  
        "BUTTON",        
        "1",       
        WS_VISIBLE|WS_CHILD, 
        30, 200, 50, 50,                 
        hwnd,(HMENU)ID_BUTTON1,g_inst,NULL);
        
        Button2 = CreateWindowEx (
        WS_EX_CLIENTEDGE,  
        "BUTTON",        
        "2",       
        WS_VISIBLE|WS_CHILD, 
        90, 200, 50, 50,                
        hwnd,(HMENU)ID_BUTTON2,g_inst,NULL);
        
        Button3 = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "3",       
        WS_VISIBLE|WS_CHILD, 
        150, 200, 50, 50,             
        hwnd,(HMENU)ID_BUTTON3,g_inst,NULL);
        
        ButtonDividir = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "/",       
        WS_VISIBLE|WS_CHILD, 
        250, 200, 50, 50,             
        hwnd,(HMENU)ID_BUTTONdividir, g_inst, NULL);
         
        Button4 = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "4",       
        WS_VISIBLE|WS_CHILD, 
        30, 260, 50, 50,             
        hwnd, (HMENU)ID_BUTTON4,g_inst,NULL);
        
        Button5 = CreateWindowEx (
        WS_EX_CLIENTEDGE, "BUTTON", "5",       
        WS_VISIBLE|WS_CHILD, 
        90, 260, 50, 50,
        hwnd,(HMENU)ID_BUTTON5,g_inst,NULL);
        
    Button6 = CreateWindowEx (
        WS_EX_CLIENTEDGE,"BUTTON", "6",       
        WS_VISIBLE|WS_CHILD, 
        150, 260, 50, 50,                
        hwnd,(HMENU)ID_BUTTON6,g_inst,NULL);
        
        ButtonVezes = CreateWindowEx (
        WS_EX_CLIENTEDGE,"BUTTON", "*",       
        WS_VISIBLE|WS_CHILD, 
        250, 260, 50, 50,                
        hwnd,(HMENU)ID_BUTTONvezes,g_inst, NULL );
    
        Button7 = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "7",       
        WS_VISIBLE|WS_CHILD, 
        30, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTON7,g_inst,NULL);
        
        Button8 = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "8",       
        WS_VISIBLE|WS_CHILD, 
        90, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTON8,g_inst,NULL);
        
        Button9 = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "9",       
        WS_VISIBLE|WS_CHILD, 
        150, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTON9,g_inst,NULL);
        
        ButtonMenos = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "-",       
        WS_VISIBLE|WS_CHILD, 
        250, 320, 50, 50,
        hwnd,(HMENU)ID_BUTTONmenos,g_inst,NULL);
        
        ButtonPorcentagem = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "%",       
        WS_VISIBLE|WS_CHILD, 
        30, 380, 50, 50,
        hwnd,(HMENU)ID_BUTTONporcentagem,g_inst,NULL);
        
        ButtonPonto = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        ".",       
        WS_VISIBLE|WS_CHILD, 
        90, 380, 50, 50,hwnd,(HMENU)ID_BUTTONponto,g_inst, NULL);
        
        ButtonMais = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "+",       
        WS_VISIBLE|WS_CHILD, 
        150, 380, 50, 50,
        hwnd,(HMENU)ID_BUTTONmais,g_inst,NULL);
        
        ButtonIgual = CreateWindowEx (
        WS_EX_CLIENTEDGE, 
        "BUTTON", 
        "=",       
        WS_VISIBLE|WS_CHILD, 
        250, 380, 50, 50,
        hwnd,(HMENU)ID_BUTTONigual,g_inst,NULL);
        
    SendMessage((HWND) EditTotal,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button1,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);      
           
    SendMessage((HWND) Button2,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);        
    SendMessage((HWND) Button3,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) ButtonDividir,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    
    SendMessage((HWND) Button4,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button5,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button6,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) ButtonVezes,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    
    SendMessage((HWND) Button7,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button8,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) Button9,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    SendMessage((HWND) ButtonMenos,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    
    SendMessage((HWND) ButtonPorcentagem,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);  
    SendMessage((HWND) ButtonPonto,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);
    
    SendMessage((HWND) ButtonMais,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);    
    SendMessage((HWND) ButtonIgual,(UINT) WM_SETFONT, (WPARAM) 0,(LPARAM) lParam);                   
}

 //Parte 3 do Tut
int a = 1;
char s_valor1[20] = "0", s_valor2[20] = "0", s_total[20] = "0";
int valor1, valor2, total;

//função WindowProcedure
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_CREATE:
             //Parte 2 do Tut
             DesenharObjectos(hwnd,message,wParam,lParam);
        break;    
        case WM_COMMAND:
             /*
             Parte 3 do Tut
             */
              if ((HIWORD(wParam) == BN_CLICKED))
            {   
                switch (LOWORD(wParam))
                {
                    case ID_BUTTON1:  
                        Button1;
                    break;
                    case ID_BUTTON2:        
                        Button2;                     
                    break;
                    case ID_BUTTON3:        
                       Button3;                     
                    break;
                    case ID_BUTTONdividir:        
                        ButtonDividir;                     
                    break;
                    case ID_BUTTON4:  
                        Button4;
                    break;
                    case ID_BUTTON5:        
                        Button5;                     
                    break;
                    case ID_BUTTON6:        
                       Button6;                     
                    break;
                    case ID_BUTTONvezes:        
                        ButtonVezes;                     
                    break;
                    case ID_BUTTON7:  
                        Button7;
                    break;
                    case ID_BUTTON8:        
                        Button8;                     
                    break;
                    case ID_BUTTON9:        
                       Button9;                     
                    break;
                    case ID_BUTTONmenos:        
                        ButtonMenos;                     
                    break;
                    case ID_BUTTONporcentagem:  
                        ButtonPorcentagem;
                    break;
                    case ID_BUTTONponto:        
                        ButtonPonto;                     
                    break;
                    case ID_BUTTONmais:        
                       ButtonMais;                     
                    break;
                    case ID_BUTTONigual:        
                        ButtonIgual;                     
                    break;
                }
                SendMessage(
                    (HWND) EditTotal,
                    (UINT) WM_SETTEXT, 
                    (WPARAM) 0,
                    (LPARAM) &s_valor1
                    );
                SendMessage((HWND)valor1,(UINT)EM_GETLINE,(WPARAM)1,(LPARAM) &s_valor1); 
                     
                switch (LOWORD(wParam))
                {
                    case ID_BUTTON1:  
                        Button1;
                    break;
                    case ID_BUTTON2:        
                        Button2;                     
                    break;
                    case ID_BUTTON3:        
                       Button3;                     
                    break;
                    case ID_BUTTONdividir:        
                        ButtonDividir;                     
                    break;
                    case ID_BUTTON4:  
                        Button4;
                    break;
                    case ID_BUTTON5:        
                        Button5;                     
                    break;
                    case ID_BUTTON6:        
                       Button6;                     
                    break;
                    case ID_BUTTONvezes:        
                        ButtonVezes;                     
                    break;
                    case ID_BUTTON7:  
                        Button7;
                    break;
                    case ID_BUTTON8:        
                        Button8;                     
                    break;
                    case ID_BUTTON9:        
                       Button9;                     
                    break;
                    case ID_BUTTONmenos:        
                        ButtonMenos;                     
                    break;
                    case ID_BUTTONporcentagem:  
                        ButtonPorcentagem;
                    break;
                    case ID_BUTTONponto:        
                        ButtonPonto;                     
                    break;
                    case ID_BUTTONmais:        
                       ButtonMais;                     
                    break;
                    case ID_BUTTONigual:        
                        ButtonIgual;                     
                    break;
                }
                SendMessage((HWND)valor2,(UINT)EM_GETLINE,(WPARAM)1,(LPARAM) &s_valor2);
                 
                   valor1 = atoi(s_valor1);
                valor2 = atoi(s_valor2); 
                 
                switch (LOWORD(wParam))
                {
                    case ID_BUTTONmais:  
                        total = valor1+valor2;
                    break;
                    case ID_BUTTONmenos:        
                        total = valor1-valor2;                     
                    break;
                    case ID_BUTTONvezes:        
                       total = valor1*valor2;                     
                    break;
                    case ID_BUTTONdividir:        
                        total = valor1 / valor2;                     
                    break;
                }    //switch (LOWORD(wParam))
                
                itoa (total,s_total,10);
                     
                SendMessage(
                    (HWND) EditTotal,
                    (UINT) WM_SETTEXT, 
                    (WPARAM) 0,
                    (LPARAM) &s_total
                    );
                    
            }    //if ((HIWORD(wParam) == BN_CLICKED))
        break;
        case WM_DESTROY:
            PostQuitMessage (0);
        break;
        default:                     
            return DefWindowProc (hwnd, message, wParam, lParam);
    }//switch (message)
    return 0;
}

