// Nodo Buscar Referencia

Nodo Buscar(int ref){
	Nodo aux=this->H;
	while(aux.dato!=ref){
		if (aux.sig==Null)
		{
			//Busqueda de la referencia
			return Null;
		}
		aux=aux.sig;
	}
	return aux;
}

//Para el Nodo Vacio

Nodo is Vacio()

//Nodo Busqueda

Nodo Busqueda(int ref, Nodo n){
	if (n.dato!=ref)
	{
		if (in.sig==Null)
		{
			//Mensaje de error
			return Null; 
		}
		return Busqueda(ref, n.sig);
	}
	return n;
}

