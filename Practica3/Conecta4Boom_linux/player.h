#ifndef PLAYER_H
#define PLAYER_H

#include "environment.h"

class Player{
    public:
      Player(int jug);
      Environment::ActionType Think();
      void Perceive(const Environment &env);
      
      double ValorCasilla(const Environment &estado ,int fila, int columna);
      double Valoracion(const Environment &estado, int jugador);
      double Poda_AlfaBeta(const Environment &actual, int profundidad, Environment::ActionType &accion, double alpha , double beta, bool detona);
    
    private:
      int jugador_;
      Environment actual_;
};
#endif
