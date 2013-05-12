#ifndef __PORTABLE_TIMER__
#define __PORTABLE_TIMER__

/*
	(c) 2000, Anton Ragnarsson
	huvudsakligen skriven f�r att kunna g�ra program
	f�r basenskylten p� olika plattformar
*/


#ifdef __cplusplus
extern "C" {
#endif


int    init_timer(void);		/* anropas i b�rjan */
void   reset_timer(void);		/* nollst�ller timern */
float  get_timer(void);			/* ger tiden i sekunder */
void   snooze(int ms);			/* v�nta en viss tid */


#ifdef __cplusplus
}
#endif

#endif//__PORTABLE_TIMER__
