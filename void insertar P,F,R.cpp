void insertar P(int dato) //Checar si esta vacio

if (is Vacio()) //true-false
{
	Nodo m(dato)
	T=m;
	H=T;
}
insertar P(int dato){
Nodo m(dato,this->H);
H=m;

Nodo m(dato,this->H);
if (is Vacio())
{
	T=m;
}
H=m;

//Para insertar un Nodo al final
void insertar F(int dato){
	Nodo m(dato)
	if (is Vacio())
	{
		this->T=m;
		this->H=m;
		return;
	}
	this->T.sig=m;
	this->T=m;
}
}

// Para insertar un Nodo en medio
void insertar Ref(int dato, int ref){
	if (is Vacio())
	{
		//Mensaje de error
		return;
	}
	Nodo m Buscar(set)
	if (m==Null)
	{
		//Mensaje de error
		return;
	}
	if (m.sig==Null)
	{
		insertar F(dato);
		return;
	}
	Nodo n(dato, m.sig);
	m.sig=n;
}

//Con boleano 
bool is Vacio(){
	return(T==Null && H==Null);
}