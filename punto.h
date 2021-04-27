class Punto{
    private:
     int coordX;
     int coordY;
     double distancia;

     public:
     Punto(int valorX, int valorY)
     :coordX{valorX}, coordY{valorY}
     {

     }
    
    void imprimePunto(){
        std::cout<<" valor x "<<coordX<<std::endl;
        std::cout<<" valor y "<<coordY<<std::endl;
    }

    double calculaDistancia(Punto p2){

    distancia=sqrt( pow(p2.coordX- coordX,2) + pow(p2.coordY - coordY,2) );
    std::cout<<"valores coordenadas x"<<p2.coordX<<" "<<coordX<<std::endl;
    std::cout<<"valores coordenadas y"<<p2.coordY<<" "<<coordY<<std::endl;
    return distancia;
    }
    
 
    



};