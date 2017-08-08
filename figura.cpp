/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   figura.cpp
 * Author: Dell
 * 
 * Created on 7 de agosto de 2017, 21:42
 */

#include "figura.h"
#include<iostream>
using namespace std;

class figura{
    private:
	
	std::string color = "";
public:
    figura( string colord){
        
    }
    virtual void setAltura()=0;
    virtual void setBase()=0;
    virtual void setColor()=0;
    virtual double getAltura()=0;  //Métodos abstractos se utiliza el virtual y se iguala a cero solo en la clase padre
       virtual double getBase()=0;
          
          virtual double CalcularArea()=0;
          virtual double CalcularPerimetro()=0;
          
	};
        