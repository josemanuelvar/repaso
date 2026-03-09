#include <iostream>
//PARA AÑADIR COLORES
    #define RED_COLOR "\033[1;31m"
    #define ORANGE "\033[1;33m"
    #define GREEN_COLOR "\033[1;32m"
    #define CIAN "\033[1;36m"
    #define PURPLE "\033[1;35m"
    #define R "\033[1;41m"
    #define GE "\033[1;42m"
    #define O "\033[1;43m"
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
double PideNumeroReal();
void vista_suma();
void controlSuma();
void controlResta();
void vista_resta();
void vista_multiplicacion();
void vista_division();



int main(){
 control_menu_principal();
    
}

/*––––––––––––––––––-*
 * MÓDULOS BACK-ENED *
 *–––––––––––––––––––*/
    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 5 División–––––––––––––––––––––––––––––––––––––––––––––––|
        float division(float a, float b){
            float res = -1;
            res = a / b;

            return res;
        }
    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 4 Multiplicación–––––––––––––––––––––––––––––––––––––––––––––––|
        float multiplicacion(float a, float b){
            float res = -1;
            res = a * b;

            return res;
        }
    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 3 Resta–––––––––––––––––––––––––––––––––––––––––––––––|
        float resta(float a, float b){
            float res = -1;
            res = a - b;

            return res;
        }
    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 2 Suma–––––––––––––––––––––––––––––––––––––––––––––––|
        float suma(float a, float b){
            float res = -1;
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
                        controlSuma();
                    break;
                    case(3):
                        controlResta();
                    break;
                    case(4):
                        vista_multiplicacion();
                    break;
                    case(5):
                        vista_division();
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



    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 5 División–––––––––––––––––––––––––––––––––––––––––––––––|

        void vista_division(){
            float a = -1, b = -1;
            cout <<"\nBienvenid@ al programa que divide dos números reales.";
            cout <<"\nIntroduzca un número: ";
            cin  >> a;
            cout <<"Introduzca un número: ";
            cin  >> b;

            cout <<"El resultado de dividir "<<a <<" ÷ " <<b <<" = " <<GE<<" " <<division(a, b) <<" "<<RESET <<endl<<endl;
        }

    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 4 Multiplicación–––––––––––––––––––––––––––––––––––––––––––––––|

        void vista_multiplicacion(){
            float a = -1, b = -1;
            cout <<"\nBienvenid@ al programa que multiplica dos números reales.";
            cout <<"\nIntroduzca un número: ";
            cin  >> a;
            cout <<"Introduzca un número: ";
            cin  >> b;

            cout <<"El resultado de multiplicar "<<a <<" x " <<b <<" = " <<GE<<" " <<multiplicacion(a, b) <<" "<<RESET <<endl<<endl;
        }

    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 3 Resta–––––––––––––––––––––––––––––––––––––––––––––––|

        void BienvenidaResta(){
            cout <<"\nBienvenid@ al programa que resta dos números reales.";
        }
        void vista_resta(float a, float b){
            cout <<"El resultado de restar "<<a <<" - " <<b <<" = " <<GE<<" " <<resta(a, b) <<" "<<RESET <<endl<<endl;
        }

    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 2 Suma–––––––––––––––––––––––––––––––––––––––––––––––|
        void BienvenidaSuma(){
            cout <<endl <<ORANGE<<"Bienvenid@ al programa que Suma dos números reales." <<RESET <<endl;
        }

        /**
         * @brief 
         */
        void vista_suma(float a, float b){
            cout <<"El resultado de sumar "<<a <<" + " <<b <<" = " <<GE<<" " <<suma(a, b) <<" "<<RESET <<endl<<endl;
        }
    //––––––––––––––––––––––––––––––––––––––––––––––––––PIDE NÚMERO REAL–––––––––––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Función que pide al usuario que introduzca un número y lo almacena en una variable  
         * @pre el número que se ha de pedir al usuario ha de ser un número real.
         * @return valor que transfiere por copia del valor almacenado en la variable n.
         * @pos el número real se transfiere por copia.
         */
        double PideNumeroReal(){
            double n = -1;
            cout <<"Introduzca un número: ";
            cin  >> n;
            return n;
        }  
    //––––––––––––––––––––––––––––––––––––––––––––––EJERCICIO 1 Hola Mundo––––––––––––––––––––––––––––––––––––––––––––|
       /**
        * @brief Módulo que muestra el primer ejercicio realizado.
        */
        void ejercicio_1(){
            cout << GREEN_COLOR <<"\n¡HOLA MUNDO!\n" <<RESET <<endl; 
        }
    //–––––––––––––––––––––––––––––––––––––––––––––––––––MENÚ UNIDAD 1––––––––––––––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo que pide al usuario que ejercicio quiere ver
         * 
         * @param ejercicio_elejido (E/S) variable que guarda y transfiere mediante paso por referencia el ejercicio que quiere ver el usuario.
         */
        void Ud_1(int &ejercicio_elejido){
            cout <<"Elija el ejercicio que desea ver ";
            cin  >> ejercicio_elejido;
        /**
         * @brief Módulo que muestra el menú de ejercicios de la unidad 1
         */
        }
        void Vista_menu_Ud_1(){
            cout << "+==============================================================+" << endl;
            cout << "| [" <<BOLD <<"0" <<RESET <<"]" <<ITALIC <<" Exit:" <<RESET <<" Salir de la Ud 1.                                  |" << endl;
            cout << "| [" <<BOLD <<"1" <<RESET <<"]" <<ITALIC <<" Ejercicios 1:" <<RESET <<" ¡Hola Mundo!.                              |" << endl;
            cout << "| [" <<BOLD <<"2" <<RESET <<"]" <<ITALIC <<" EjercicioS 2:" <<RESET <<" Suma dos números.                          |" << endl;
            cout << "| [" <<BOLD <<"3" <<RESET <<"]" <<ITALIC <<" Ejercicios 3:" <<RESET <<" Resta dos números.                         |" << endl;
            cout << "| [" <<BOLD <<"4" <<RESET <<"]" <<ITALIC <<" Ejercicios 4:" <<RESET <<" Multiplica dos números.                    |" << endl;
            cout << "| [" <<BOLD <<"5" <<RESET <<"]" <<ITALIC <<" Ejercicios 4:" <<RESET <<" Divide dos números.                        |" << endl;
            cout << "+==============================================================+" << endl <<endl;
        }
        /**
         * @brief Módulo que da la bienvenida a la unidad 1
         */
        void Bienvenida_Ud_1(){
            cout <<endl <<CIAN UNDERLINE <<"¡Bienvenid@! A la Unidad 1" <<RESET <<endl;
        }
    //––––––––––––––––––––––––––––––––––––––––––––––––MENÚ PRINCIPAL–––––––––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo que guarda en una variable la opción elegida por el usuario.
         * 
         * @param opcion (E/S) Variable que almacena la opción elegida por el usuario que determina que ejercicio quiere ver.
         */
        void Ud_elegida(int &opcion){
            cout <<"Elija la unidad que desea ver ";
            cin  >>opcion;
        }
    //–––––––––––––––––––––––––––––––––––––––––––––––––––VISTA MENÚ––––––––––––––––––––––––––––––––––––––––|
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
    //–––––––––––––––––––––––––––––––––––––––––––––––––––BIENVENIDA––––––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo que da la bienvenida al programa 
         */
        void Bienvenida_general(){
            cout <<endl <<PURPLE UNDERLINE <<"¡Bienvenid@! Aquí podras ejecutar todos los programas realizados durante el curso de 1º DAM" <<RESET <<endl;
        }
/*––––––––––––––––––––––*
 * MÓDULOS CONTROL MENÚ *
 *––––––––––––––––––––––*/
    //–––––––––––––––––––––––––––––––––––––––––––––––––CONTROL resta–––––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo que controla el flujo de módulos del ejercicio resta.
         */
        void controlResta(){
            float a = -1, b = -1;
            BienvenidaResta();
            PideNumeroReal();
            vista_resta(a, b);
        }
    //–––––––––––––––––––––––––––––––––––––––––––––––––CONTROL suma–––––––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo que controla el flujo de módulos del ejercicio suma.
         */
        void controlSuma(){
            float a = -1, b = -1;
            BienvenidaSuma();
            a = PideNumeroReal();
            b = PideNumeroReal();
            vista_suma(a, b);
        }
    //–––––––––––––––––––––––––––––––––––––––––––––CONTROL MENÚ UNIDAD 1––––––––––––––––––––––––––––––––––|
        /**
         * @brief Módulo que controla el flujo del menú de la unidad 1
         */
        void control_Ud_1(){
            int ejercicio_elejido = -1;

            Bienvenida_Ud_1();
            Vista_menu_Ud_1();
            Ud_1(ejercicio_elejido);
            Control_menu_Ud_1(ejercicio_elejido);
        }
        /**
         * @brief Módulo que muestra un mensaje de despedida al usuario cuando sale del programa
         */
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