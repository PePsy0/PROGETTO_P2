#ifndef OBJECT_H
#define OBJECT_H

// usiamo anche unità come inch foot ecc?
// -> campo statico con i fattori di conversione.
class object
{
public:
    object();
    virtual ~object();
    object (const object&);
    //tutti i metodi virtual e gli operatori
    // già che ci siamo i distruttori e construttori virtuali.
    //costruttori di copia
    object* somma(object*, object*) const;// da decidere se usare funzioni virtuali o operatori sovraccaricati
    object* diff(object*, object*) const;// metodi virtuali puri

    //TUTTE LE OPERAZIONI SARANNO MESSE FUORI PER POTER FARE L'INVERSIONE DEI PARAMETRI
    virtual unsigned int get_unit(object*) const =0;// metodo che ritorna l'unità di misura della classe (es m² ecc)
};

//operatori di stampa? con friend

#endif // OBJECT_H
