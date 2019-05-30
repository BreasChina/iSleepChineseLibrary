#ifndef MAIN_DISP_VALUES_DEFINE_H
#define MAIN_DISP_VALUES_DEFINE_H
/******************************************************************************
** File name    :        Main_Disp_Define.h
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
#define IX_MAIN_PRESSURE            0
#define IX_MAIN_LEAKAGE             1
#define IX_MAIN_BR                  2
#define IX_MAIN_L                   3
#define IX_MAIN_AP                  4
#define IX_MAIN_P_LOW               5
#define IX_MAIN_P_HIGH              6
#define IX_MAIN_SNOOZE              7
#define IX_MAIN_MASK_OFF            8
#define IX_MAIN_I_E_RATIO           9
#define IX_MAIN_TIDAL_VOL          10

#define NO_MAIN_STRINGS            11
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Presion"				// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Fuga"				// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"FR:"					// PV22
#define TXT_MAIN_L                   L"F:"					// PV22,PV20i
#define TXT_MAIN_AP                  L"PA:"					// PV20i
#define TXT_MAIN_P_LOW               L"P_:"					// PV20i
#define TXT_MAIN_P_HIGH              L"P?"					// PV20i
#define TXT_MAIN_SNOOZE              L"Pausa"				// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Mascarilla quitada"	// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Paine"				// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Vuoto"				// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"HT:"     			// PV22
#define TXT_MAIN_L                   L"V:"  				// PV22,PV20i
#define TXT_MAIN_AP                  L"TP:"         		// PV20i
#define TXT_MAIN_P_LOW               L"P_:"			        // PV20i
#define TXT_MAIN_P_HIGH              L"P?"			        // PV20i
#define TXT_MAIN_SNOOZE              L"Torkku"				// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Maski irti"			// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Druck"               // PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Leckage"             // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"AF:"                 // PV22
#define TXT_MAIN_L                   L"L:"                  // PV22,PV20i
#define TXT_MAIN_AP                  L"AP:"                 // PV20i
#define TXT_MAIN_P_LOW               L"P_:"                 // PV20i
#define TXT_MAIN_P_HIGH              L"P?"                 // PV20i
#define TXT_MAIN_SNOOZE              L"Snooze"              // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Maske ab"            // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Tryk"		   		// PV20+,PV22,PV20i  		
#define TXT_MAIN_LEAKAGE             L"Lækage"	            // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"RPM:"		        // PV22
#define TXT_MAIN_L                   L"L:"		            // PV22,PV20i
#define TXT_MAIN_AP                  L"AT:"		            // PV20i
#define TXT_MAIN_P_LOW               L"T_:"		            // PV20i
#define TXT_MAIN_P_HIGH              L"T?"		            // PV20i
#define TXT_MAIN_SNOOZE              L"Snooze"	            // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Maske af"	        // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Pression"	       	// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Fuite"		       	// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"Fr:"		           	// PV22
#define TXT_MAIN_L                   L"F:"		           	// PV22,PV20i
#define TXT_MAIN_AP                  L"PA:"		           	// PV20i
#define TXT_MAIN_P_LOW               L"P_:"		           	// PV20i
#define TXT_MAIN_P_HIGH              L"P?"		           	// PV20i
#define TXT_MAIN_SNOOZE              L"Veille"	           	// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Masque Off"         	// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Trykk"		        // PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Lekkasje"	        // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"FR:"		            // PV22
#define TXT_MAIN_L                   L"L:"			        // PV22,PV20i
#define TXT_MAIN_AP                  L"AP:"		            // PV20i
#define TXT_MAIN_P_LOW               L"P_:"		            // PV20i
#define TXT_MAIN_P_HIGH              L"P?"		            // PV20i
#define TXT_MAIN_SNOOZE              L"Snooze"	            // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Maske av."	        // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Tryck"		       	// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Läckage"	           	// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"AF:"		           	// PV22
#define TXT_MAIN_L                   L"L:"		           	// PV22,PV20i
#define TXT_MAIN_AP                  L"P:"		           	// PV20i
#define TXT_MAIN_P_LOW               L"P_:"		           	// PV20i
#define TXT_MAIN_P_HIGH              L"P?"		           	// PV20i
#define TXT_MAIN_SNOOZE              L"Snooze"	           	// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Mask av"	           	// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Pressure"            // PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Leakage"             // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"BR:"                 // PV22
#define TXT_MAIN_L                   L"L:"                  // PV22,PV20i
#define TXT_MAIN_AP                  L"AP:"                 // PV20i
#define TXT_MAIN_P_LOW               L"P_:"                 // PV20i
#define TXT_MAIN_P_HIGH              L"P?"                 // PV20i
#define TXT_MAIN_SNOOZE              L"Snooze"              // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Mask Off"            // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L""					 // PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L""					 // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L""					 // PV22
#define TXT_MAIN_L                   L""					 // PV22,PV20i
#define TXT_MAIN_AP                  L""					 // PV20i
#define TXT_MAIN_P_LOW               L""					 // PV20i
#define TXT_MAIN_P_HIGH              L""					 // PV20i
#define TXT_MAIN_SNOOZE              L""					 // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L""					 // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L""
#define TXT_MAIN_TIDAL_VOL           L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Druk"		        // PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Lekkage"	            // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"AH:"		            // PV22
#define TXT_MAIN_L                   L"L:"		            // PV22,PV20i
#define TXT_MAIN_AP                  L"AD:"		            // PV20i
#define TXT_MAIN_P_LOW               L"P_:"		            // PV20i
#define TXT_MAIN_P_HIGH              L"P?"		            // PV20i
#define TXT_MAIN_SNOOZE              L"Snooze"	            // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Masker Af"	        // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Pressione"			// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Perdite"				// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"FR:"					// PV22
#define TXT_MAIN_L                   L"P:"				    // PV22,PV20i
#define TXT_MAIN_AP                  L"AP:"					// PV20i
#define TXT_MAIN_P_LOW               L"P_:"					// PV20i
#define TXT_MAIN_P_HIGH              L"P?"					// PV20i
#define TXT_MAIN_SNOOZE              L"Funzione di snooze"	// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Maschera off"		// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"\x03A0\x03AF\x03B5\x03C3\x03B7"					// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"\x0394\x03B9\x03B1\x03C1\x03C1\x03BF\x03AE"					// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"P.A:"					// PV22
#define TXT_MAIN_L                   L"\x0394:"					// PV22,PV20i
#define TXT_MAIN_AP                  L"\x0395.\x03A0:"					// PV20i
#define TXT_MAIN_P_LOW               L"\x03A0_:"					// PV20i
#define TXT_MAIN_P_HIGH              L"\x03A0?"					// PV20i
#define TXT_MAIN_SNOOZE              L"\x0391\x03BD\x03B1\x03BC\x03BF\x03BD\x03AE"					// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"\x039C\x03AC\x03C3\x03BA\x03B1 \x03B5\x03BA\x03C4\x03CC\x03C2"					// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Pressão"	           	// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Fuga"		       	// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"FR:"		           	// PV22
#define TXT_MAIN_L                   L"F:"		           	// PV22,PV20i
#define TXT_MAIN_AP                  L"P:"		           	// PV20i
#define TXT_MAIN_P_LOW               L"P_:"		           	// PV20i
#define TXT_MAIN_P_HIGH              L"P?"		           	// PV20i
#define TXT_MAIN_SNOOZE              L"Soneca"	           	// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Sem Máscara"        	// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"Ci"L"\x015B"L"nienie"					  // PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"Przeciek"					              // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"BR:"// PV22
#define TXT_MAIN_L                   L"L:"					              // PV22,PV20i
#define TXT_MAIN_AP                  L"AP:"					// PV20i
#define TXT_MAIN_P_LOW               L"P_:"					                // PV20i
#define TXT_MAIN_P_HIGH              L"P?"					                // PV20i
#define TXT_MAIN_SNOOZE              L"Drzemka"					                // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"Zdj\x0119ta maska"					      // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"
									
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"\x5727\x529B"					// PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"\x30EA\x30FC\x30AF"				// PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"BR:"								// PV22
#define TXT_MAIN_L                   L"L:"								// PV22,PV20i
#define TXT_MAIN_AP                  L"AP:"								// PV20i
#define TXT_MAIN_P_LOW               L"P_:"								// PV20i
#define TXT_MAIN_P_HIGH              L"P?"								// PV20i
#define TXT_MAIN_SNOOZE              L"\x81EA\x52A8\x95F4\x6B47"		// PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"\x30DE\x30B9\x30AF\x30AA\x30D5"	// PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"\x538B\x529B"					 // PV20+,PV22,PV20i
#define TXT_MAIN_LEAKAGE             L"\x6F0F\x6C14"					 // PV20+,PV22,PV20i
#define TXT_MAIN_BR                  L"BR:"					 // PV22
#define TXT_MAIN_L                   L"L:"					 // PV22,PV20i
#define TXT_MAIN_AP                  L"AP:"					 // PV20i
#define TXT_MAIN_P_LOW               L"P_:"					 // PV20i
#define TXT_MAIN_P_HIGH              L"P?"					 // PV20i
#define TXT_MAIN_SNOOZE              L"\x81EA\x52A8\x95F4\x6B47"					 // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"\x9762\x7F69\x8131\x843D"					 // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"I:E"
#define TXT_MAIN_TIDAL_VOL           L"Vt"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_MAIN_PRESSURE            L"abcdefghijk"          // PV20+,PV22,PV20i	
#define TXT_MAIN_LEAKAGE             L"abcdefghijk"          // PV20+,PV22,PV20i	
#define TXT_MAIN_BR                  L"abcdefghijk"          // PV22
#define TXT_MAIN_L                   L"abcdefghijk"          // PV22,PV20i
#define TXT_MAIN_AP                  L"abcdefghijk"          // PV20i
#define TXT_MAIN_P_LOW               L"abcdefghijk"          // PV20i
#define TXT_MAIN_P_HIGH              L"abcdefghijk"          // PV20i
#define TXT_MAIN_SNOOZE              L"abcdefghijk"	         // PV20+,PV22,PV20i
#define TXT_MAIN_MASK_OFF            L"abcdefghijk"	         // PV20+,PV22,PV20i
#define TXT_MAIN_I_E_RATIO           L"abcdefghijk"
#define TXT_MAIN_TIDAL_VOL           L"abcdefghijk"

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

#endif  // MAIN_DISP_VALUES_DEFINE_H

