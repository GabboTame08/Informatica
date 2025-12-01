/*
interfaccia pubblica:

push(int n) - inserisce un elemento in cima allo Stack
pop - elimina e restituisce l'elemento in cima allo Stack
top - restituisce senza eliminare l'elemento in cima allo Stack
isEmpty() - restituisce true solo se lo Stack è vuoto
size() - restituisce il numero di elementi presenti/inseriti nello Stack
*/

#ifndef STACK_H
#define STACK_H

class Stack{

    private:

    public:
        void push(int n);
        int pop;
        int top;
        bool isEmpty();
        int size;
}