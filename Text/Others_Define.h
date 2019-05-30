#ifndef OTHERS_DEFINE_H
#define OTHERS_DEFINE_H
/******************************************************************************
** File name    :        Others_define.h
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
#define IX_OTHERS_WAKEUPALARM_TIMEDATE     0
#define IX_OTHERS_WAKEUPALARM              1
#define IX_OTHERS_DEVICE_SETTINGS          2
#define IX_OTHERS_DEVICE_INFORMATION       3
#define IX_OTHERS_MEMORY_CARD              4

#define NO_OTHERS_STRINGS                  5
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Alarma, Hora/Fecha"
#define TXT_OTHERS_WAKEUPALARM               L"Alarma despertador"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Ajustes equipo"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Informacion equipo"
#define TXT_OTHERS_MEMORY_CARD               L"Tarjeta de memoria"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Herätyshäl. aika/päiv?
#define TXT_OTHERS_WAKEUPALARM               L"Herätyshälytys"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Laiteasetukset"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Laiteinfo"
#define TXT_OTHERS_MEMORY_CARD               L"Muistkortti"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Wecker, Zeit/Datum"
#define TXT_OTHERS_WAKEUPALARM               L"Wecker"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Geräteeinstellung"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Geräteinfo"
#define TXT_OTHERS_MEMORY_CARD               L"Speicherkarte"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Vækkeur, tid/dato"
#define TXT_OTHERS_WAKEUPALARM               L"Vækkeur"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Apparat indstillinger"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Apparat information"
#define TXT_OTHERS_MEMORY_CARD               L"Memorykort"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Réveil heure/date"
#define TXT_OTHERS_WAKEUPALARM               L"Réveil"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Réglages appareil"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Information appareil"
#define TXT_OTHERS_MEMORY_CARD               L"Carte mémoire"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Alarm for vekking. Tid/dato"
#define TXT_OTHERS_WAKEUPALARM               L"Alarm for vekking. Tid/dato"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Apparatinnstilling"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Apparatinformasjon"
#define TXT_OTHERS_MEMORY_CARD               L"Minnekort"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Väckarklocka, tid/datum"
#define TXT_OTHERS_WAKEUPALARM               L"Väckarklocka"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Apparatinställning"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Apparatinformation"
#define TXT_OTHERS_MEMORY_CARD               L"Minneskort"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Wake Up Alarm, Time/Date"
#define TXT_OTHERS_WAKEUPALARM               L"Wake Up Alarm"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Device Settings"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Device Information"
#define TXT_OTHERS_MEMORY_CARD               L"Memory Card"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L""
#define TXT_OTHERS_WAKEUPALARM               L""
#define TXT_OTHERS_DEVICE_SETTINGS           L""
#define TXT_OTHERS_DEVICE_INFORMATION        L""
#define TXT_OTHERS_MEMORY_CARD               L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Wekker Tijd/Datum"
#define TXT_OTHERS_WAKEUPALARM               L"Wekker"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Instelling toestel"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Toestelinformatie"
#define TXT_OTHERS_MEMORY_CARD               L"Geheugenkaart"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Allarme sveglia/data/ora"
#define TXT_OTHERS_WAKEUPALARM               L"Allarme di sveglia"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Impostazioni strumento"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Informazioni strumento"
#define TXT_OTHERS_MEMORY_CARD               L"Scheda memoria"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"\x039E\x03C5\x03C0\x03BD\x03B7\x03C4\x03AE\x03C1\x03B9,\x038F\x03C1\x03B1/\x0397\x03BC\x03B5\x03C1\x03BF\x03BC\x03B7\x03BD\x03AF\x03B1"
#define TXT_OTHERS_WAKEUPALARM               L"\x039E\x03C5\x03C0\x03BD\x03B7\x03C4\x03AE\x03C1\x03B9"
#define TXT_OTHERS_DEVICE_SETTINGS           L"\x03A1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2 \x03C3\x03C5\x03C3\x03BA\x03B5\x03C5\x03AE\x03C2"
#define TXT_OTHERS_DEVICE_INFORMATION        L"\x03A0\x03BB\x03B7\x03C1\x03BF\x03C6\x03BF\x03C1\x03AF\x03B5\x03C2 \x03C3\x03C5\x03C3\x03BA\x03B5\x03C5\x03AE\x03C2"
#define TXT_OTHERS_MEMORY_CARD               L"\x039A\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Alarm despert, hora/data"
#define TXT_OTHERS_WAKEUPALARM               L"Alarme Despertador"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Ajustes do Equipamento"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Imformação - Equipamento"
#define TXT_OTHERS_MEMORY_CARD               L"Cartão de Memória"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"Alarm budzenia, czas/data"
#define TXT_OTHERS_WAKEUPALARM               L"Alarm budzenia"
#define TXT_OTHERS_DEVICE_SETTINGS           L"Ustawienia"
#define TXT_OTHERS_DEVICE_INFORMATION        L"Informacje"
#define TXT_OTHERS_MEMORY_CARD               L"Karta pami"L"\x0119"L"ci"
											
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"\x76EE\x899A\x3057\x6642\x8A08\x3001\x65E5\x4ED8"
#define TXT_OTHERS_WAKEUPALARM               L"\x76EE\x899A\x3057\x6642\x8A08"
#define TXT_OTHERS_DEVICE_SETTINGS           L"\x672C\x4F53\x8A2D\x5B9A"
#define TXT_OTHERS_DEVICE_INFORMATION        L"\x672C\x4F53\x60C5\x5831"
#define TXT_OTHERS_MEMORY_CARD               L"\x30AB\x30FC\x30C9"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"\x5524\x9192\x95F9\x949F\x65F6\x95F4\x65E5\x671F"
#define TXT_OTHERS_WAKEUPALARM               L"\x5524\x9192\x95F9\x949F"
#define TXT_OTHERS_DEVICE_SETTINGS           L"\x8BBE\x5907\x8BBE\x7F6E"
#define TXT_OTHERS_DEVICE_INFORMATION        L"\x8BBE\x5907\x4FE1\x606F"
#define TXT_OTHERS_MEMORY_CARD               L"\x5B58\x50A8\x5361"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_OTHERS_WAKEUPALARM_TIMEDATE      L"abcdefghijklmnopqrstuvwx"
#define TXT_OTHERS_WAKEUPALARM               L"abcdefghijklmnopqrstuvwx"
#define TXT_OTHERS_DEVICE_SETTINGS           L"abcdefghijklmnopqrstuvwx"
#define TXT_OTHERS_DEVICE_INFORMATION        L"abcdefghijklmnopqrstuvwx"
#define TXT_OTHERS_MEMORY_CARD               L"abcdefghijklmnopqrstuvwx"

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

#endif  // OTHERS_DEFINE_H

