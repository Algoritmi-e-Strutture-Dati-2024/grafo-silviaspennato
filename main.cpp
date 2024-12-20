#include <iostream>
#include "Grafo.cpp" 

int main() {
    // Creo il grafo
    Grafo<std::string> grafo;

    // Inserisco dei nomi
    grafo.aggiungiNodo("Silvia");
    grafo.aggiungiNodo("Marco");
    grafo.aggiungiNodo("Luca");
    grafo.aggiungiNodo("Sara");
    grafo.aggiungiNodo("Elisa");

    // Aggiungo gli archi con i pesi
    grafo.aggiungiArco("Silvia", "Marco", 1);
    grafo.aggiungiArco("Silvia", "Luca", 2);
    grafo.aggiungiArco("Marco", "Sara",3);
    grafo.aggiungiArco("Luca", "Elisa", 4);
    grafo.aggiungiArco("Sara", "Elisa", 5);
    grafo.aggiungiArco("Elisa", "Marco", 6);
    
    
    // Stampo la  matrice di adiacenza del grafo
    grafo.stampa();

    // Effettuo la verifica per vedere se un nodo esiste
    std::cout << " Il nodo Luca esiste? " << (grafo.verificaNodo("Luca") ? "Sì" : "No") << std::endl;

    // Effettuo la verifica per vedere se un arco esiste
    std::cout << "Esiste un arco tra Silvia e Marco? " << (grafo.verificaArco("Silvia", "Marco") ? "Sì" : "No") << std::endl;


   // Visualizzo i nodi adiacenti a un nodo
    grafo.nodiAdiacenti("Silvia");


    // Sto rimuovendo un arco
    grafo.rimuoviArco("Silvia", "Marco");
    std::cout << "Matrice di Adiacenza dopo la rimozione dell'arco tra Silvia e Marco:" << std::endl;
    grafo.stampa();

    // Sto rimuovendo un nodo
    grafo.rimuoviNodo("Luca");
    std::cout << "Matrice di Adiacenza dopo aver effettuato la rimozione del nodo Luca:" << std::endl;
    grafo.stampa();

    // Aggiungo un nuovo nodo e arco
    grafo.aggiungiNodo("Matteo");
    grafo.aggiungiArco("Elisa", "Matteo", 8);
    std::cout << "Matrice di Adiacenza dopo aver aggiunto il nodo 6 e l'arco tra Elisa e Matteo" << std::endl;
    grafo.stampa();

    // Verifico la connettività tra due nodi
    std::cout << "Il nodo Silvia è connesso al nodo Elisa? " << (grafo.verificaArco("Silvia", "Elisa") ? "Sì" : "No") << std::endl;

   
    

    return 0;
    
    

}
