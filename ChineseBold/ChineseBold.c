/**************************** ChineseBold.c ***********************

   ChineseBold font table and code page structure definitions.
   This file has been auto-generated with the IconEdit / FontEdit tool.

   Copyright(c) RAMTEX 1998-2006

*****************************************************************/
#include <gdisphw.h>

/* Code page entry (one codepage range element) */
static struct
   {
   GCPHEAD chp;
   GCP_RANGE cpr[8];     /* Adjust this index if more codepage segments are added */
   }
GCODE FCODE ChineseBoldcp =
   {
   #include "ChineseBold.cp" /* Codepage table */
   };

typedef struct          /* Structure used for automatic word alignment */
   {
   SGUCHAR b[78];       /* Symbol data, "variable length" array */
   } GSYMDAT;

/* Symbol table entry with fixed sized symbols */
static struct
   {
   GSYMHEAD sh;         /* Symbol header */
   SGUCHAR b[78];       /* Symbol data, "variable length" */
   }
GCODE FCODE ChineseBoldsym[8] =
   {
   #include "ChineseBold.sym" /* Include symbols */
   };

/* Font structure */
GCODE GFONT FCODE ChineseBold =
   {
   22,       /* width */
   26,       /* height */
   sizeof(GSYMDAT),    /* number of bytes in a symbol  (must include any alignment padding)*/
   (PGSYMBOL)ChineseBoldsym, /* pointer to array of SYMBOLS */
   8,      /* num symbols */
   (PGCODEPAGE)&ChineseBoldcp
   };

