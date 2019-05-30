#ifndef RAMP_DEFINE_H
#define RAMP_DEFINE_H
/******************************************************************************
** File name    :        Ramp_Define.h
** Project      :        PV21
** File Type    :        Header
** Description	:
**
** Revision History:
** Date         Engineer    ECP     Changes
** ----------------------------------------------------------------------------
** 2005-09-27   *   FM   *  ---  * 	File Created
** ----------------------------------------------------------------------------
**
******************************************************************************/

/******************************************************************************
**                               INCLUDE FILES
******************************************************************************/


/******************************************************************************
**                                #DEFINES
******************************************************************************/
#define IX_START_PRESSURE       0
#define IX_RAMP_TIME           1
#define IX_RAMP_FUNCTION       2
#define IX_RAMP_ALWAYS_RAMP    3

#define NO_RAMP_STRINGS        4
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Presion de inicio"
#define TXT_RAMP_TIME            L"Tiempo de rampa"
#define TXT_RAMP_FUNCTION        L"Funcion de rampa"
#define TXT_RAMP_ALWAYS_RAMP     L"Inici siempre ramp"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Starttipaine"
#define TXT_RAMP_TIME            L"Ramp-aika"
#define TXT_RAMP_FUNCTION        L"Ramp-toiminto"
#define TXT_RAMP_ALWAYS_RAMP     L"Ala aina Ramp:ll?

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Startdruck"
#define TXT_RAMP_TIME            L"Rampenzeit"
#define TXT_RAMP_FUNCTION        L"Rampe"
#define TXT_RAMP_ALWAYS_RAMP     L"Rampe stets an"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Start tryk"
#define TXT_RAMP_TIME            L"Rampetid"
#define TXT_RAMP_FUNCTION        L"Rampefunktion"
#define TXT_RAMP_ALWAYS_RAMP     L"Start altid med Rampe"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Pression départ"
#define TXT_RAMP_TIME            L"Temps de rampe"
#define TXT_RAMP_FUNCTION        L"Fonction rampe"
#define TXT_RAMP_ALWAYS_RAMP     L"Tjrs démar. Rampe"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Start trykk"
#define TXT_RAMP_TIME            L"Ramp tid"
#define TXT_RAMP_FUNCTION        L"Ramp funksjon"
#define TXT_RAMP_ALWAYS_RAMP     L"Oppstart med ramp"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Starttryck"
#define TXT_RAMP_TIME            L"Ramptid"
#define TXT_RAMP_FUNCTION        L"Rampfunktion"
#define TXT_RAMP_ALWAYS_RAMP     L"Starta alltid med ramp"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Start Pressure"
#define TXT_RAMP_TIME            L"Ramp Time"
#define TXT_RAMP_FUNCTION        L"Ramp Function"
#define TXT_RAMP_ALWAYS_RAMP     L"Always start with ramp"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L""
#define TXT_RAMP_TIME            L""
#define TXT_RAMP_FUNCTION        L""
#define TXT_RAMP_ALWAYS_RAMP     L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Startdruk"
#define TXT_RAMP_TIME            L"Ramp Tijd"
#define TXT_RAMP_FUNCTION        L"Rampfnctie"
#define TXT_RAMP_ALWAYS_RAMP     L"Start altijd met Ramp"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Press inizio rampa"
#define TXT_RAMP_TIME            L"Tempo di rampa"
#define TXT_RAMP_FUNCTION        L"Funzione di rampa"
#define TXT_RAMP_ALWAYS_RAMP     L"Accendi con rampa"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"\x03A0\x03AF\x03B5\x03C3\x03B7 \x0395\x03BA\x03BA\x03AF\x03BD\x03B7\x03C3\x03B7\x03C2"
#define TXT_RAMP_TIME            L"\x03A7\x03C1\x03CC\x03BD\x03BF\x03C2 \x03C1\x03AC\x03BC\x03C0\x03B1\x03C2"
#define TXT_RAMP_FUNCTION        L"\x039B\x03B5\x03B9\x03C4\x03BF\x03C5\x03C1\x03B3\x03AF\x03B1 \x03C1\x03AC\x03BC\x03C0\x03B1\x03C2"
#define TXT_RAMP_ALWAYS_RAMP     L"\x0395\x03BA\x03BA\x03AF\x03BD\x03B7\x03C3\x03B7 \x03BC\x03B5 \x03C1\x03AC\x03BC\x03C0\x03B1"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Pressão de início"
#define TXT_RAMP_TIME            L"Tempo de rampa"
#define TXT_RAMP_FUNCTION        L"Função Rampa"
#define TXT_RAMP_ALWAYS_RAMP     L"Inicie com Rampa"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"Ci\x015Bnienie startowe"
#define TXT_RAMP_TIME            L"Czas narastania"
#define TXT_RAMP_FUNCTION        L"Funkcje narastania"
#define TXT_RAMP_ALWAYS_RAMP     L"Startuj z narastaniem"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"\x30E9\x30F3\x30D7\x958B\x59CB\x5727"
#define TXT_RAMP_TIME            L"\x30E9\x30F3\x30D7\x6642\x9593"
#define TXT_RAMP_FUNCTION        L"\x30E9\x30F3\x30D7\x6A5F\x80FD"
#define TXT_RAMP_ALWAYS_RAMP     L"\x5E38\x306B\x30E9\x30F3\x30D7\x3067\x958B\x59CB" // Long version
//#define TXT_RAMP_ALWAYS_RAMP     L"\x30E9\x30F3\x30D7\x3067\x958B\x59CB" // Short version

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"\x8D77\x59CB\x538B\x529B"
#define TXT_RAMP_TIME            L"\x5EF6\x65F6\x5347\x538B\x65F6\x95F4"
#define TXT_RAMP_FUNCTION        L"\x5EF6\x65F6\x5347\x538B\x529F\x80FD"
#define TXT_RAMP_ALWAYS_RAMP     L"\x59CB\x7EC8\x4F7F\x7528\x5EF6\x65F6"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_RAMP_PRESSURE        L"abcdefghijklmnop"
#define TXT_RAMP_TIME            L"abcdefghijklmnop"
#define TXT_RAMP_FUNCTION        L"abcdefghijklmnop"
#define TXT_RAMP_ALWAYS_RAMP     L"abcdefghijklmnop"

#endif
/********************************************************************************
**                                TYPE DEFINITIONS
********************************************************************************/

/********************************************************************************
**                                CONSTANST OBJECT EXTERNS
********************************************************************************/

/********************************************************************************
**                                VARIABLE OJECTS EXTERNS
********************************************************************************/

/********************************************************************************
**                                FUNCTIONS PROTOTYPES
********************************************************************************/

/********************************************************************************
**                                END OF FILE
********************************************************************************/

#endif  // RAMP_DEFINE_H

