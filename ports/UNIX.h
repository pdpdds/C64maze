#ifndef _UNIX_H
#define _UNIX_H
/*
 * here moved original c64 support 
 */

/* port variables */
/* port functions */
void port_pset(unsigned int x, unsigned int y);
void port_clearMazeRegion(void);
void port_fflushMazeRegion(void);
void port_graphics_init(void);
void port_vert_line(unsigned short x1, unsigned short y1, unsigned short y2);
void port_diag_line(unsigned short x1, unsigned short y1, unsigned short ix,
    short incx, short incy);
void port_hor_line(unsigned short x1, unsigned short x2, unsigned short y1);
void port_printat(unsigned short x, unsigned short y, char *s);
void port_line(unsigned short x1, unsigned short y1,
        unsigned short x2, unsigned short y2);
unsigned long port_get_time(void);
void port_colour_banner(void);
long port_get_current_time(void);
void port_clearHGRpage(void);
unsigned char port_sound_irq(void);
void port_start_sound(unsigned char *l1, unsigned char *l2, unsigned char *l3);
void port_loadVICFont(unsigned char magnification);
char port_getch(void);

#endif /* UNIX*/
