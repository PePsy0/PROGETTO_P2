#ifndef VOLUME_H
#define VOLUME_H


class volume
{
    unsigned int heigh;
public:
    volume();
    volume(unsigned int);// volume
    volume(unsigned int, unsigned int);
    volume(unsigned int, unsigned int, unsigned int);
    double get_mm3();
    double get_cm3();
    double get_L();
    unsigned int get_m3();
    unsigned int get_km3();
};

#endif // VOLUME_H
