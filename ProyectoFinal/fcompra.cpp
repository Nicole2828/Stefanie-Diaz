#include <iostream>
#include <string>
 
using namespace std;
 
int g_total = 0;
 
struct factura{
 
    int id;
    string des;
    float cant;
    float prec;
    string fecela;
    string feccad;
    float sub;
    float iva;
float total;
};
 
void registra(factura *);
void ver (factura *);
void tamano(factura *);
 
int main(){
	system("cls");
	int n;
	factura  productos[10];
 
	cout << "-------------------------PRODUCTOS---------------------\n\n";
    cout<< " NUMERO DE PRODUCTOS: ";
    cin >> n;
 
    cout<<"\n\n";
	system("cls");
 
    for (int i = 0;   i < n ;i++){
        registra(&productos[i]);
    }
 
    for(int i = 0; i < n; i++){
        ver(&productos[i]);
    }
 
    tamano( productos );
 
system("pause");
 
}
 
void registra(factura *p){
	cout << "\n\n*******************PRODUCTOS CAPTURADOS********************\n\n";
	cout << "           INGRESE EL ID DEL PRODUCTO: ";
	cin >> p->id;
    fflush(stdin);
 
	cout << "           DESCRIBA EL PRODUCTO: ";
	cin >> p->des;
	cout << "           ESCRIBA LA CANTIDAD: ";
	cin >> p->cant;
 
	cout << "           INGRESE EL PRECIO: ";
	cin >> p->prec;
    fflush(stdin);
 
	cout << "           FECHA DE ELABORACION: ";
	cin >> p->fecela;
    fflush(stdin);
	cout << "           FECHA DE CADUCIDAD: ";
	cin>>p->feccad;
 
	system("cls");
}
 
void ver (factura *p){
 
	cout<<"\n\n*******************PRODUCTOS CAPTURADOS********************\n\n";
 
	cout << "           EL ID DEL PRODUCTO "<<p->id<<"\n";
	cout << "           EL PRODUCTO "<<p->des<<"\n";
	cout << "           LA CANTIDAD "<<p->cant<<"\n";
	cout << "           EL PRECIO "<<p->prec<<"\n";
	cout << "           FECHA DE ELABORACION "<<p->fecela<<"\n";
	cout << "           FECHA DE CADUCIDAD "<<p->feccad<<"\n";
 
	p->sub = p->cant * p->prec;
	cout << "           EL SUBTOTAL ES: "<< p->sub << "\n";

    p->iva = p->sub* 0.15;
    cout << "            EL IVA ES: "<< p->iva << "\n";
 
	p->total = p->sub + p->iva;
    cout << "           TOTAL ES: "<< p->total << "\n";
 
    g_total += p->total;
    cout << "           EL GRAN TOTAL ES: "<< g_total << "\n";
 
	cout << " SE HAN GUARDADO LOS DATOS!!!\n\n";
 
}
 
void tamano(factura *p){
 
    cout << "DATOS CAPTUARADOS DE LOS PRUDUCTOS \n";
    cout << "     ID DE LOS PRODUCTOS  : "<<sizeof(p->id)<<"\n";
    cout << "     DESCRIPCION  : "<<sizeof(p->des)<<"\n";
    cout << "     CANTIDAD  : "<<sizeof(p->cant)<<"\n";
    cout << "     PRECIO  : "<<sizeof(p->prec)<<"\n";
    cout << "     FECHA DE ELABORACION  : "<<sizeof(p->fecela)<<"\n";
    cout << "     FECHA DE CADUCIDAD  : "<<sizeof(p->feccad)<<"\n";
    cout << "     EL SUBTOTAL ES  : "<<sizeof(p->sub)<<"\n";
    cout << "     EL IVA ES  : "<<sizeof(p->iva)<<"\n";
    cout << "     EL TOTAL ES  : "<<sizeof(p->total)<<"\n";
    cout << "     struct personas  : "<<sizeof(struct factura)<<"\n";
    cout << "         Total de p : "<<sizeof(p)<<"\n";
}