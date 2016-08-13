#include <cstdio>
#include <iostream>

using namespace std;

#include "dato.hpp"
#include "vector.hpp"
#include "nodo.hpp"
#include "l_enlazada.hpp"
#include "stack.hpp"
#include "queue.hpp"

int main(void){

  bool menu = true;

  while(menu){

    int opc;

    cout << "---------------------------------------------------" << endl;
    cout << "Practica 1: Implementacion de Estructuras de Datos." << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "1. Vector." << endl;
    cout << "2. Lista enlazada." << endl;
    cout << "3. Pila." << endl;
    cout << "4. Cola." << endl;
    cout << "5. Salir." << endl;
    cout << endl;
    cout << "Por favor, elija la opcion que desee mostrar: ";
    cin >> opc;
    cout << endl;

    switch (opc){

      case 1:
      {
        Vector v(10);

        for(int i=0; i<10; i++){
          v.set_v(i,i);
        }

        cout << "El vector es de " << v.get_sz() << " posiciones." << endl;
        cout << "El vector contiene los siguientes elementos: ";

        for(int i=0; i<10; i++){
          cout << v.get_v(i) << " ";
        }

        cout << endl;
      }
      break;

      case 2:
      {
        Nodo* A = new Nodo(10);
        Nodo* B = new Nodo(20);
        Nodo* C = new Nodo(30);
        Nodo* D = new Nodo(40);
        Nodo* E = new Nodo(50);

        Lista L;

        if(L.empty())
          cout << "La lista esta vacia." << endl;
        else
          cout << "La lista no esta vacia." << endl;

        L.insert_empty(A);
        L.insert_inicio(B);
        L.insert_final(C);
        L.insert_inicio(D);
        L.insert_final(E);

        // Quedaria DBACE

        cout << "Ahora introduciremos algunos valores." << endl;

        if(L.empty())
          cout << "La lista esta vacia." << endl;
        else
          cout << "La lista no esta vacia." << endl;

        cout << "La lista esta formada por los siguientes elementos: ";

        Nodo* aux = L.top();
        while(aux != NULL){
          cout << aux -> get_dato() << " ";
          aux = aux -> get_siguiente();
        }

        cout << endl;

        cout << "El inicio de la lista es: " << L.top() -> get_dato() << endl;
        cout << "El final de la lista es: " << L.get_final() -> get_dato() << endl;

        cout << "Ahora extraemos por el inicio los dos primeros valores, quedando la lista: ";
        L.extract_inicio();
        L.extract_inicio();

        aux = L.top();
        while(aux != NULL){
          cout << aux -> get_dato() << " ";
          aux = aux -> get_siguiente();
        }

        cout << endl;

        cout << "Finalmente, extraemos por el final el primer valor, quedando la lista: ";
        L.extract_final();

        aux = L.top();
        while(aux != NULL){
          cout << aux -> get_dato() << " ";
          aux = aux -> get_siguiente();
        }

        cout << endl;
      }
      break;

      case 3:
      {
        Nodo* A = new Nodo(10);
        Nodo* B = new Nodo(20);
        Nodo* C = new Nodo(30);
        Nodo* D = new Nodo(40);
        Nodo* E = new Nodo(50);

        Stack pila;

        if(pila.empty())
          cout << "La pila esta vacia." << endl;
        else
          cout << "La pila no esta vacia." << endl;

        cout << "Ahora introduciremos algunos valores." << endl;

        pila.insert_inicio(A);
        pila.insert_inicio(B);
        pila.insert_inicio(C);
        pila.insert_inicio(D);
        pila.insert_inicio(E);

        if(pila.empty())
          cout << "La pila esta vacia." << endl;
        else
          cout << "La pila no esta vacia." << endl;

        cout << "La pila tiene como top el elemento " << pila.top() -> get_dato() << endl;

        cout << "La pila tiene los siguientes valores: ";

        Nodo* aux = pila.top();
        while(aux != NULL){
          cout << aux -> get_dato() << " ";
          aux = aux -> get_siguiente();
        }

        cout << endl;

        cout << "Extraemos de la pila los dos primeros elementos, quedando: ";

        pila.extract_inicio();
        pila.extract_final();

        aux = pila.top();
        while(aux != NULL){
          cout << aux -> get_dato() << " ";
          aux = aux -> get_siguiente();
        }

        cout << endl;
      }
      break;

      case 4:
      {
        Nodo* A = new Nodo(10);
        Nodo* B = new Nodo(20);
        Nodo* C = new Nodo(30);
        Nodo* D = new Nodo(40);
        Nodo* E = new Nodo(50);

        Queue cola;

        if(cola.empty())
          cout << "La cola esta vacia." << endl;
        else
          cout << "La cola no esta vacia." << endl;

        cout << "Ahora introduciremos algunos valores." << endl;

        cola.insert_inicio(A);
        cola.insert_inicio(B);
        cola.insert_inicio(C);
        cola.insert_inicio(D);
        cola.insert_inicio(E);

        if(cola.empty())
          cout << "La cola esta vacia." << endl;
        else
          cout << "La cola no esta vacia." << endl;

        cout << "La cola tiene como top el elemento " << cola.top() -> get_dato() << endl;

        cout << "La cola tiene los siguientes valores: ";

        Nodo* aux = cola.top();
        while(aux != NULL){
          cout << aux -> get_dato() << " ";
          aux = aux -> get_siguiente();
        }

        cout << endl;

        cout << "Extraemos de la cola los dos primeros elementos, quedando: ";

        cola.extract_inicio();
        cola.extract_final();

        aux = cola.top();
        while(aux != NULL){
          cout << aux -> get_dato() << " ";
          aux = aux -> get_siguiente();
        }

        cout << endl;
      }
      break;

      case 5:
        menu = false;
      break;
    }
  }

  return 0;
}
