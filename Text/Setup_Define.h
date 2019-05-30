#ifndef SETUP_DEFINE_H
#define SETUP_DEFINE_H
/******************************************************************************
** File name    :        Setup_define.h
** Project      :        PV21
** File Type    :        Header
** Description  :
**
** Revision History:
** Date         Engineer    ECP     Changes
** ----------------------------------------------------------------------------
** 2005-09-27   *   FM   *  ---  *  File Created
** ----------------------------------------------------------------------------
**
******************************************************************************/

/******************************************************************************
**                               INCLUDE FILES
******************************************************************************/


/******************************************************************************
**                                #DEFINES
******************************************************************************/
#define IX_SETUP_CPAP                0
#define IX_SETUP_IPAP                1
#define IX_SETUP_EPAP                2
#define IX_SETUP_INSP_TRIGGER        3
#define IX_SETUP_EXP_TRIGGER         4
#define IX_SETUP_BACKUP_RATE         5
#define IX_SETUP_RISE_TIME           6
#define IX_SETUP_MIN_PRESSURE        7
#define IX_SETUP_MAX_PRESSURE        8
#define IX_SETUP_RAMP_PRESSURE       9
#define IX_SETUP_RAMP_TIME          10
#define IX_SETUP_E_ADAPT_LEVEL      11
#define IX_SETUP_E_ADAPT_SETTING    12
// Specials for eAdapt menu where CPAP data is between paranteses
#define IX_SETUP_CPAP_NO_EDIT       13

#define NO_SETUP_STRINGS            14
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                L"CPAP"                     // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                L"IPAP"                     // PV22
#define TXT_SETUP_EPAP                L"EPAP"                     // PV22
#define TXT_SETUP_INSP_TRIGGER        L"Trigger Insp."            // PV22
#define TXT_SETUP_EXP_TRIGGER         L"Trigger Exp."             // PV22
#define TXT_SETUP_BACKUP_RATE         L"Frecuencia respaldo"
#define TXT_SETUP_RISE_TIME           L"Tiempo de subida"
#define TXT_SETUP_MIN_PRESSURE        L"Presion Min."             // PV20i
#define TXT_SETUP_MAX_PRESSURE        L"Presion Max"              // PV20i
#define TXT_SETUP_RAMP_PRESSURE       L"Presion de Rampa"         // PV20i
#define TXT_SETUP_RAMP_TIME           L"Tiempo de Rampa"          // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL       L"eAdapt nivel"             // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING     L"eAdapt"                   // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT        L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                L"CPAP"                     // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                L"IPAP"                     // PV22
#define TXT_SETUP_EPAP                L"EPAP"                     // PV22
#define TXT_SETUP_INSP_TRIGGER        L"Insp. Triggaus"           // PV22
#define TXT_SETUP_EXP_TRIGGER         L"Exp. Triggaus"            // PV22
#define TXT_SETUP_BACKUP_RATE         L"Varmennettu taajuus"
#define TXT_SETUP_RISE_TIME           L"Nousuaikaviive"
#define TXT_SETUP_MIN_PRESSURE        L"Min. Paine"               // PV20i
#define TXT_SETUP_MAX_PRESSURE        L"Max. Paine"               // PV20i
#define TXT_SETUP_RAMP_PRESSURE       L"Ramp paine"               // PV20i
#define TXT_SETUP_RAMP_TIME           L"Ramp aika"                // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL       L"eAdapt taso"              // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING     L"eAdapt"                         // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT        L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                L"CPAP"                     // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                L"IPAP"                     // PV22
#define TXT_SETUP_EPAP                L"EPAP"                     // PV22
#define TXT_SETUP_INSP_TRIGGER        L"Insp. Trigger"            // PV22
#define TXT_SETUP_EXP_TRIGGER         L"Exp. Trigger"             // PV22
#define TXT_SETUP_BACKUP_RATE         L"Frequenz"
#define TXT_SETUP_RISE_TIME           L"Anstieg"
#define TXT_SETUP_MIN_PRESSURE        L"Min. Druck"               // PV20i
#define TXT_SETUP_MAX_PRESSURE        L"Max. Druck"               // PV20i
#define TXT_SETUP_RAMP_PRESSURE       L"Rampendruck"              // PV20i
#define TXT_SETUP_RAMP_TIME           L"Rampenzeit"               // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL       L"eAdapt Level"             // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING     L"eAdapt"                   // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT        L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP               L"CPAP"                      // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP               L"IPAP"                      // PV22
#define TXT_SETUP_EPAP               L"EPAP"                      // PV22
#define TXT_SETUP_INSP_TRIGGER       L"Insp. Trigger"             // PV22
#define TXT_SETUP_EXP_TRIGGER        L"Exp. Trigger"              // PV22
#define TXT_SETUP_BACKUP_RATE        L"Backup frekevens"
#define TXT_SETUP_RISE_TIME          L"Stigtid"
#define TXT_SETUP_MIN_PRESSURE       L"Min. Tryk"                 // PV20i
#define TXT_SETUP_MAX_PRESSURE       L"Max. Tryk"                 // PV20i
#define TXT_SETUP_RAMP_PRESSURE      L"Rampe tryk"                // PV20i
#define TXT_SETUP_RAMP_TIME          L"Rampetid"                  // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL      L"eAdapt niveau"             // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING    L"eAdapt"                       // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT       L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"PPC"                    // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"PIP"                    // PV22
#define TXT_SETUP_EPAP                  L"PEP"                    // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Trigger inspi."         // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Trigger expi."          // PV22
#define TXT_SETUP_BACKUP_RATE           L"Fréq.Régl."
#define TXT_SETUP_RISE_TIME             L"Temps Montée"
#define TXT_SETUP_MIN_PRESSURE          L"Pression mini"          // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Pression maxi"          // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Pression de rampe"      // PV20i
#define TXT_SETUP_RAMP_TIME             L"Temps de rampe"         // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"Niveau eAdapt"          // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                 // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(PPC"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                   // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                   // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                   // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Insp. Trigger"          // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Eksp. Trigger"          // PV22
#define TXT_SETUP_BACKUP_RATE           L"Backup Frekvens"
#define TXT_SETUP_RISE_TIME             L"Stigetid"
#define TXT_SETUP_MIN_PRESSURE          L"Min. trykk"             // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Max trykk"              // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Ramp trykk"             // PV20i
#define TXT_SETUP_RAMP_TIME             L"Ramp tid"               // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"eAdapt Niv?            // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                 // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                   // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                   // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                   // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Insp. trigger"          // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Exp. trigger"           // PV22
#define TXT_SETUP_BACKUP_RATE           L"Backupfrekvens"
#define TXT_SETUP_RISE_TIME             L"Stigtid"
#define TXT_SETUP_MIN_PRESSURE          L"Min. tryck"             // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Max. tryck"             // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Ramptryck"              // PV20i
#define TXT_SETUP_RAMP_TIME             L"Ramptid"                // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"eAdapt niv?            // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                 // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                   // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                   // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                   // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Insp. Trigger"          // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Exp. Trigger"           // PV22
#define TXT_SETUP_BACKUP_RATE           L"Backup Rate"
#define TXT_SETUP_RISE_TIME             L"Rise Time"
#define TXT_SETUP_MIN_PRESSURE          L"Min Pressure"           // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Max Pressure"           // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Ramp Pressure"          // PV20i
#define TXT_SETUP_RAMP_TIME             L"Ramp Time"              // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"eAdapt Level"           // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                 // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L""                        // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L""                        // PV22
#define TXT_SETUP_EPAP                  L""                        // PV22
#define TXT_SETUP_INSP_TRIGGER          L""                        // PV22
#define TXT_SETUP_EXP_TRIGGER           L""                        // PV22
#define TXT_SETUP_BACKUP_RATE           L""
#define TXT_SETUP_RISE_TIME             L""
#define TXT_SETUP_MIN_PRESSURE          L""                        // PV20i
#define TXT_SETUP_MAX_PRESSURE          L""                        // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L""                        // PV20i
#define TXT_SETUP_RAMP_TIME             L""                        // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L""                        // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L""                        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                    // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                    // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                    // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Insp. Trigger"           // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Exp. Trigger"            // PV22
#define TXT_SETUP_BACKUP_RATE           L"Backup Freq"
#define TXT_SETUP_RISE_TIME             L"Oplooptijd"
#define TXT_SETUP_MIN_PRESSURE          L"Min. Druk"               // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Max. Druk"               // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Ramp Druk"               // PV20i
#define TXT_SETUP_RAMP_TIME             L"Ramp Tijd"               // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"eAdapt niveau"                        // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                    // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                    // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                    // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Trigger inspiratorio"    // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Trigger espiratorio"     // PV22
#define TXT_SETUP_BACKUP_RATE           L"Freq. di back up"
#define TXT_SETUP_RISE_TIME             L"Tempo di salita"
#define TXT_SETUP_MIN_PRESSURE          L"Pressione minima"        // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Pressione massima"       // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Pressione di rampa"      // PV20i
#define TXT_SETUP_RAMP_TIME             L"Tempo di rampa"          // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"Livello eAdapt"                        // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP               L"CPAP"                        // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP               L"IPAP"                        // PV22
#define TXT_SETUP_EPAP               L"EPAP"                        // PV22
#define TXT_SETUP_INSP_TRIGGER       L"Trigger \x0395\x03B9\x03C3\x03C0\x03BD\x03BF\x03AE\x03C2"                        // PV22
#define TXT_SETUP_EXP_TRIGGER        L"Trigger \x0395\x03BA\x03C0\x03BD\x03BF\x03AE\x03C2"                        // PV22
#define TXT_SETUP_BACKUP_RATE        L"Backup Rate"
#define TXT_SETUP_RISE_TIME          L"Rise Time"
#define TXT_SETUP_MIN_PRESSURE       L"\x0395\x03BB\x03AC\x03C7\x03B9\x03C3\x03C4\x03B7 \x03A0\x03AF\x03B5\x03C3\x03B7"                        // PV20i
#define TXT_SETUP_MAX_PRESSURE       L"\x039C\x03AD\x03B3\x03B9\x03C3\x03C4\x03B7 \x03A0\x03AF\x03B5\x03C3\x03B7"                        // PV20i
#define TXT_SETUP_RAMP_PRESSURE      L"\x03A0\x03AF\x03B5\x03C3\x03B7 \x0395\x03BA\x03BA\x03AF\x03BD\x03B7\x03C3\x03B7\x03C2"                        // PV20i
#define TXT_SETUP_RAMP_TIME          L"\x03A7\x03C1\x03CC\x03BD\x03BF\x03C2 \x03C1\x03AC\x03BC\x03C0\x03B1\x03C2"                        // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL      L"eAdapt Level"                        // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING    L"eAdapt"                        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT       L"(CPAP"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                    // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                    // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                    // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Trigger Insp."           // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Trigger Exp."            // PV22
#define TXT_SETUP_BACKUP_RATE           L"FR Backup"
#define TXT_SETUP_RISE_TIME             L"Tempo de Elevação"
#define TXT_SETUP_MIN_PRESSURE          L"Pressão Min"             // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Pressão Max"             // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Pressão Rampa"           // PV20i
#define TXT_SETUP_RAMP_TIME             L"Tempo de Rampa"          // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"Nivel eAdapt"            // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                  // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                        // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                        // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                        // PV22
#define TXT_SETUP_INSP_TRIGGER          L"Czu\x0142o\x015B\x0107 wdechu"                        // PV22
#define TXT_SETUP_EXP_TRIGGER           L"Czu\x0142o\x015B\x0107 wydechu"                        // PV22
#define TXT_SETUP_BACKUP_RATE           L"Backup Rate"
#define TXT_SETUP_RISE_TIME             L"Rise Time"
#define TXT_SETUP_MIN_PRESSURE          L"Min Ci\x015Bnienie"                        // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"Max Ci\x015Bnienie"                        // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"Ci\x015Bnienie startowe"                        // PV20i
#define TXT_SETUP_RAMP_TIME             L"Czas narastania"                        // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"eAdapt"                        // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt Level"                        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"
#define TXT_SETUP_IPAP                  L"IPAP"
#define TXT_SETUP_EPAP                  L"EPAP"
#define TXT_SETUP_INSP_TRIGGER          L"\x5438\x6C17\x30C8\x30EA\x30AC\x30FC"
#define TXT_SETUP_EXP_TRIGGER           L"\x547C\x6C17\x30C8\x30EA\x30AC\x30FC"
#define TXT_SETUP_BACKUP_RATE           L"\x8A2D\x5B9A\x547C\x5438\x56DE\x6570"
#define TXT_SETUP_RISE_TIME             L"\x30E9\x30A4\x30BA\x30BF\x30A4\x30E0"
#define TXT_SETUP_MIN_PRESSURE          L"\x6700\x4F4E\x5727"
#define TXT_SETUP_MAX_PRESSURE          L"\x6700\x5927\x5727"
#define TXT_SETUP_RAMP_PRESSURE         L"\x30E9\x30F3\x30D7\x5727"
#define TXT_SETUP_RAMP_TIME             L"\x30E9\x30F3\x30D7\x6642\x9593"
#define TXT_SETUP_E_ADAPT_LEVEL         L"eAdapt\x30EC\x30D9\x30EB"
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"CPAP"                        // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"IPAP"                        // PV22
#define TXT_SETUP_EPAP                  L"EPAP"                        // PV22
#define TXT_SETUP_INSP_TRIGGER          L"\x5438\x6C14\x89E6\x53D1"                        // PV22
#define TXT_SETUP_EXP_TRIGGER           L"\x547C\x6C14\x89E6\x53D1"                        // PV22
#define TXT_SETUP_BACKUP_RATE           L"\x5907\x7528\x9891\x7387"
#define TXT_SETUP_RISE_TIME             L"\x4E0A\x5347\x65F6\x95F4"
#define TXT_SETUP_MIN_PRESSURE          L"\x6700\x4F4E\x538B"                        // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"\x6700\x9AD8\x538B"                        // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"\x5EF6\x65F6\x538B\x529B"                        // PV20i
#define TXT_SETUP_RAMP_TIME             L"\x5EF6\x65F6\x5347\x538B\x65F6\x95F4"                        // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"eAdapt\x6C34\x5E73"                        // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"eAdapt"                        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(CPAP"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_SETUP_CPAP                  L"abcdefghijklmnop"        // PV20+,PV20i,PV22
#define TXT_SETUP_IPAP                  L"abcdefghijklmnop"        // PV22
#define TXT_SETUP_EPAP                  L"abcdefghijklmnop"        // PV22
#define TXT_SETUP_INSP_TRIGGER          L"abcdefghijklmnop"        // PV22
#define TXT_SETUP_EXP_TRIGGER           L"abcdefghijklmnop"        // PV22
#define TXT_SETUP_BACKUP_RATE           L""
#define TXT_SETUP_RISE_TIME             L""
#define TXT_SETUP_MIN_PRESSURE          L"abcdefghijklmnop"        // PV20i
#define TXT_SETUP_MAX_PRESSURE          L"abcdefghijklmnop"        // PV20i
#define TXT_SETUP_RAMP_PRESSURE         L"abcdefghijklmnop"        // PV20i
#define TXT_SETUP_RAMP_TIME             L"abcdefghijklmnop"        // PV20i
#define TXT_SETUP_E_ADAPT_LEVEL         L"abcdefghijklmnop"        // PV20ER
#define TXT_SETUP_E_ADAPT_SETTING       L"abcdefghijklmnop"        // PV20ER
#define TXT_SETUP_CPAP_NO_EDIT          L"(Set CPAP"

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

#endif  // SETUP_DEFINE_H

