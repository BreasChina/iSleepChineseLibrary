/****************************  Chinese.c ***********************

   Chinese font table and code page structure definitions.
   This file has been auto-generated with the IconEdit / FontEdit tool.

   Copyright(c) RAMTEX 1998-2006

*****************************************************************/
#include <gdisphw.h>

/* Code page entry (one codepage range element) */
static struct
   {
   GCPHEAD chp;
   GCP_RANGE cpr[166];     /* Adjust this index if more codepage segments are added */
   }
GCODE FCODE Chinesecp =
   {
   #include "Chinese.cp" /* Codepage table */
   };

typedef struct          /* Structure used for automatic word alignment */
   {
   SGUCHAR b[24];       /* Symbol data, "variable length" array */
   } GSYMDAT;

/* Symbol table entry with fixed sized symbols */
static struct
   {
   GSYMHEAD sh;         /* Symbol header */
   SGUCHAR b[24];       /* Symbol data, "variable length" */
   }
GCODE FCODE Chinesesym[262] =
   {
   #include "Chinese.sym" /* Include symbols */
   };

/* Font structure */
GCODE GFONT FCODE Chinese =
   {
   10,       /* width */
   12,       /* height */
   sizeof(GSYMDAT),    /* number of bytes in a symbol  (must include any alignment padding)*/
   (PGSYMBOL)Chinesesym, /* pointer to array of SYMBOLS */
   262,      /* num symbols */
   (PGCODEPAGE)&Chinesecp
   };

