#ifndef LENGHT_H
#define LENGHT_H


class lenght
{
protected:
    unsigned int L;
public:
    ~lenght ();//distruttore
    lenght (const lenght&);//costruttore di copia

    lenght();
    lenght(unsigned int);
    unsigned int get_m() const;
    unsigned int get_cm() const;//dio cane i const
    unsigned int get_dm() const;
    unsigned int get_km() const;
    
   //overloading operatori

};

//overloading operatori di output

#endif // LENGHT_H
