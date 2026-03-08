#include <iostream>
//PARA AÑADIR COLORES
    #define RED_COLOR "\033[1;31m"
    #define GREEN_COLOR "\033[1;32m"
    #define CIAN "\033[1;36m"
    #define PURPLE "\033[1;35m"
    #define G "\033[40m"
    #define GE "\033[1;42m"
    #define Y "\033[1;43m"
    #define CY "\033[1;46m"

//PARA ESTILOS DE TEXTO
    #define BOLD "\033[1m"
    #define UNDERLINE "\033[4m"
    #define ITALIC "\033[3m"
    #define RESET "\033[0m"
using namespace std;

//–––––––––––––––––––––––––––––––––––––––––––––––––DECLARACIÓN DE LOS MODULOS––––––––––––––––––––––––––––––––––––––––––––|

void control_menu_principal();
void Bienvenida_general();
void Vista_menu_principal();
void Ud_elegida();
void Control_menu();
void exit();
void control_Ud_1();
void Bienvenida_Ud_1();
void Vista_menu_Ud_1();
void Ud_1();
void Control_menu_Ud_1();
void ejercicio_1();
void vista_suma();





int main(){
 control_menu_principal();
    
}

    /*––––––––––––––––––-*
     * MÓDULOS BACK-ENED *
     *–––––––––––––––––––*/
//––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 2–––––––––––––––––––––––––––––––––––––––––––––––|

float suma(float a, float b){
    int res = -1;
    res = a + b;

    return res;
}

//–––––––––––––––––––––––––––––––––––––––––––––––––MENÚ UNIDAD 1––––––––––––––––––––––––––––––––––––––––––––| 

        void Control_menu_Ud_1(int ejercicio_elejido){
                cout <<endl <<UNDERLINE <<"Opción elegida:" <<RESET <<" " <<ejercicio_elejido <<endl;
                switch(ejercicio_elejido){
                    case(0):
                        control_menu_principal();
                    break;
                    case(1):
                        ejercicio_1();
                    break;
                    case(2):
                        vista_suma();
                    break;

                }
        }


//–––––––––––––––––––––––––––––––––––––––––––––––––MENÚ PRINCIPAL–––––––––––––––––––––––––––––––––––––|        
        /**
         * @brief Módulo que comprueba y dirige al usuario a la opción elegida.
         * @details Mediante una serie de if's 
         * 
         * @param opcion [description]
         */
        void Control_menu(int opcion){
            switch(opcion){
                case(0):
                    exit();
                break;
                case(1):
                    control_Ud_1();
                break;
            default:
                cout <<"\nOpción no permitida\n";
            }
        }

    /*––––––––––––––––––––*
     * MÓDULOS FRONT-ENED *
     *––––––––––––––––––––*/
//––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 2–––––––––––––––––––––––––––––––––––––––––––––––|

void vista_suma(){
    float a = -1, b = -1;
    cout <<"\nBienvenid@ al programa que suma dos números reales.";
    cout <<"\nIntroduzca un número: ";
    cin  >> a;
    cout <<"Introduzca un número: ";
    cin  >> b;

    cout <<"El resultado de sumar "<<a <<" + " <<b <<" = " <<GE<<" " <<suma(a, b) <<" "<<RESET <<endl<<endl;
}


//––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 1–––––––––––––––––––––––––––––––––––––––––––––––|
        void ejercicio_1(){
            cout << GREEN_COLOR <<"\n¡HOLA MUNDO!\n\n" <<RESET <<endl; 
        }

//–––––––––––––––––––––––––––––––––––––––––––––––––MENÚ UNIDAD 1––––––––––––––––––––––––––––––––––––––––––––|

        void Ud_1(int &ejercicio_elejido){
            cout <<"Elija el ejercicio que desea ver ";
            cin  >> ejercicio_elejido;
        }
        void Vista_menu_Ud_1(){
            cout << "+==============================================================+" << endl;
            cout << "| [" <<BOLD <<"0" <<RESET <<"]" <<ITALIC <<" Exit:" <<RESET <<" Salir de la Ud 1.                                  |" << endl;
            cout << "| [" <<BOLD <<"1" <<RESET <<"]" <<ITALIC <<" Ejercicios 1:" <<RESET <<" ¡Hola Mundo!.                              |" << endl;
            cout << "| [" <<BOLD <<"2" <<RESET <<"]" <<ITALIC <<" EjercicioS 2:" <<RESET <<" Suma dos números.                          |" << endl;
            cout << "| [" <<BOLD <<"3" <<RESET <<"]" <<ITALIC <<" Ejercicios 3:" <<RESET <<" Resta dos números.                         |" << endl;
            cout << "+==============================================================+" << endl <<endl;
        }

        void Bienvenida_Ud_1(){
            cout <<endl <<CIAN UNDERLINE <<"¡Bienvenid@! A la Unidad 1" <<RESET <<endl;
        }

//––––––––––––––––––––––––––––––––––––––––––––––––MENÚ PRINCIPAL–––––––––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo que guarda en una variable la opción elegida por el usuario.
         * 
         * @param opcion (E/S) Variable que almacina la opción elegida por el usuario que determina que ejercicio quiere ver.
         */
        void Ud_elegida(int &opcion){

            cout <<"Elija la unidad que desea ver ";
            cin  >>opcion;
        }

        /**
         * @brief Módulo que muestra por pantalla el menú principal donde se selecciona la unidad que se quiere ver.
         */
        void Vista_menu_principal(){
            cout << "+==============================================================+" << endl;
            cout << "| [" <<BOLD <<"0" <<RESET <<"]" <<ITALIC <<" Exit:" <<RESET <<" Salida.                                            |" << endl;
            cout << "| [" <<BOLD <<"1" <<RESET <<"]" <<ITALIC <<" Ejercicios Unidad 1:" <<RESET <<" Introducción a la Programación.     |" << endl;
            cout << "| [" <<BOLD <<"2" <<RESET <<"]" <<ITALIC <<" EjercicioS Unidad 2:" <<RESET <<" Estructuras de Control.             |" << endl;
            cout << "| [" <<BOLD <<"3" <<RESET <<"]" <<ITALIC <<" Ejercicios Unidad 3:" <<RESET <<" Funciones y Modularización.         |" << endl;
            cout << "+==============================================================+" << endl <<endl;
        }

        void Bienvenida_general(){
            cout <<endl <<PURPLE UNDERLINE <<"¡Bienvenid@! Aquí podras ejecutar todos los programas realizados durante el curso de 1º DAM" <<RESET <<endl;
        }


    /*––––––––––––––––––––––*
     * MÓDULOS CONTROL MENÚ *
     *––––––––––––––––––––––*/
//–––––––––––––––––––––––––––––––––––––––––––––CONTROL MENÚ UNIDAD 1––––––––––––––––––––––––––––––––––|

        void control_Ud_1(){
            int ejercicio_elejido = -1;

            Bienvenida_Ud_1();
            Vista_menu_Ud_1();
            Ud_1(ejercicio_elejido);
            Control_menu_Ud_1(ejercicio_elejido);
        }

        void exit(){
            cout <<"\n¡Gracias, vuelva pronto!";
        }

//–––––––––––––––––––––––––––––––––––––––––––––––CONTROL PRINCIPAL––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo controlador del inicio del programa y del menú principal.
         */
        void control_menu_principal(){
            int opcion = -1;

            //LLAMADAS AL FRONT
            //1º) Llamada al módulo bienvenida
            Bienvenida_general();

            Vista_menu_principal();
            //2º) Llamada al menú principal
            Ud_elegida(opcion);
            
            //LLAMADA AL BACK
            //3º) Invocación al comprobador de 
            Control_menu(opcion);
        }
