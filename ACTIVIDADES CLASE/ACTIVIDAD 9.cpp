# include  < iostream >
usando el  espacio de nombres  est�ndar ;

struct  Tpila {

    elementos flotantes [ 100 ];
    int top;
};
typedef  struct  Tpila Pila;

 inicializaci�n nula (Pila * s) {
    s-> top = - 1 ;
}

bool  vac�o (Pila * s) {
    return s-> top < 0 ;
}

 empuje vac�o (Pila * s, flotador e) {
    if (s-> top < 99 ) {
        (s-> arriba ) ++;
        s-> elementos [s-> top ] = e;
    }
}

flotador  pop (Pila * s) {
	flotador e = 0 ;
    if (s-> top > = 0 ) {
        e = s-> elementos [s-> arriba ];
        (s-> arriba ) -;
        volver e;
    }
    volver e;
}
 / * float Ultimo (Pila * s) {
 	flotador esto = 0;
 	    while (! empty (s))
		esto = pop (s);
		volver esto; 	
} * /
 flotador  Ultimo2 (Pila s) {
 	flotador esto = 0 ;
 	    while (! empty (& s)) {
		esto = pop (& s);
		}
		
	volver esto; 	
 }
 
int  main () {
	
	Pila unaPila;
	    inicializar (& unaPila);
	    
	        empujar (& unaPila, 8 );
    		empujar (& unaPila, 3.4 );
    		empujar (& unaPila, 7.8 );
    		
    		if ( vac�o (& unaPila)) {
    		cout << " Esta vacia " << endl;
			}
    		m�s {
			cout << " El ultimo es: " << Ultimo2 (unaPila) << endl;
			}
			
			if (! empty (& unaPila))
				cout << " La pila no esta vacia " << endl;
			m�s 
			cout << " La pila esta vacia " ;	
    		
	devuelve  0 ;
}
