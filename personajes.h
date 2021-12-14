#include <allegro.h>
#ifndef PERSONAJES_H_INCLUDED
#define PERSONAJES_H_INCLUDED

struct NAVE{
    int x,y;
    int n_disp;
    int max_disp;
    int tick;
    int ancho_b, alto_b ;
    int alto_p, ancho_p;
    int dir_bala;
    int tipo;
    int vida;

    BITMAP* img_nav;
    BITMAP* img_bala;
    BITMAP* exp_enem;

        void inicia(char* ruta_nave , char* ruta_bala, int _ancho_b, int _alto_b,
        int _ancho_p , int _alto_p ,int _x, int _y ,int _dir_bala, int _tipo, int _vida);
    bool temporizador (int tiempo);
    void pinta(BITMAP* buffer ,int iy, int ix);
    void mueve();
    void dispara(struct Balas disparos[], BITMAP* buffer);



    };
void acomoda_enemigo(struct NAVE E[]);
void pintar_enemigo(struct NAVE E[], BITMAP* buffer ,int mov);
void explocion1(struct NAVE E, BITMAP* buffer);
void explocion2(struct NAVE N, BITMAP* buffer,BITMAP* fondo);
void crear_bala_enemigo(struct NAVE E[], int&azar);
void crear_bala_nave(struct NAVE& N,struct Balas disparos[]);
struct escudo{
    int x,y;
    int dan;
    int tipo;


    };
void inicar_escudo(struct escudo muros[]);
void pintar_escudos(struct escudo ES[],BITMAP*img_mur ,BITMAP* buffer);


#endif // PERSONAJES_H_INCLUDED
