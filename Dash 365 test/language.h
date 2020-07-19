//***********************************
//LANGUAGE SELECTION. Uncomment only one line
//***********************************
#define LANG_ENG //English
//#define LANG_FRA //French
//#define LANG_RU //Russian, use together with the russian font in libraries folder
//#define LANG_ES //Spanish
//#define LANG_CZ //Czech

#ifdef LANG_ENG
  #define defaultFont System5x7

  const char noBUS1[] PROGMEM = {"laBucciata"};
  const char noBUS2[] PROGMEM = {"   M365   "};
  const char noBUS3[] PROGMEM = {" Disabled "};
  const char noBUS4[] PROGMEM = {" Mode  ON "};

  const char confScr1[] PROGMEM = {"Contakilometri: "};
  const char confScr2[] PROGMEM = {"Conta Km: "};
  const char confScr2a[] PROGMEM = {"  VEL"};
  const char confScr2b[] PROGMEM = {"CORRENTE"};
  const char confScr3[] PROGMEM = {"Msg Batteria: "};
  const char confScr4[] PROGMEM = {"Msg Batteria: "};
  const char confScr5[] PROGMEM = {"Info Batteria"};
  const char confScr6[] PROGMEM = {"Configura M365"};
  const char confScr7[] PROGMEM = {"Salva e esci"};
 
  const char infoScr1[] PROGMEM = {"Distance totale"};
  const char infoScr2[] PROGMEM = {"Tempo acceso"};
 
  const char battScr[] PROGMEM = {">>> Freno per uscire <<<"};
 
  const char M365CfgScr1[] PROGMEM = {"Cruise control: "};
  const char M365CfgScr2[] PROGMEM = {"Agg. Cruise"};
  const char M365CfgScr3[] PROGMEM = {"Fanali:         "};
  const char M365CfgScr4[] PROGMEM = {"Agg. Fanali "};
  const char M365CfgScr5[] PROGMEM = {"Kers:        "};
  const char M365CfgScr6[] PROGMEM = {"Agg. Kers"};
  const char M365CfgScr8[] PROGMEM = {"Esci"};
  const char M365CfgScr7[] PROGMEM = {"Ruote:     "};
 
  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};
 
  const char l_Weak[] PROGMEM =   {"  DEBOLE"};
  const char l_Medium[] PROGMEM = {"MEDIO"};
  const char l_Strong[] PROGMEM = {"FORTE"};
 
  const char l_Yes[] PROGMEM = {"SI"};
  const char l_No[] PROGMEM =  {" NO"};
  const char l_On[] PROGMEM =  {" ON"};
  const char l_Off[] PROGMEM = {"OFF"};
 
  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
  
  #endif
  
  
  #ifdef LANG_RU
  #define defaultFont System5x7mod

  const char noBUS1[] PROGMEM = {"Ytn"};
  const char noBUS2[] PROGMEM = {"Cdzpb"};
  const char noBUS3[] PROGMEM = {"c"};
  const char noBUS4[] PROGMEM = {"cfvjrfnjv!"};
  
  const char confScr1[] PROGMEM = {"Cgbljvtnh: "};
  const char confScr2[] PROGMEM = {"Ht;.Cgbljv.:"};
  const char confScr2a[] PROGMEM = {"CRJHJCNM"};
  const char confScr2b[] PROGMEM = {"  NJR   "};
  const char confScr3[] PROGMEM = {"Ghtleght;ltybt:"};
  const char confScr4[] PROGMEM = {"Ghtl. ?fnfhtb: "};
  const char confScr5[] PROGMEM = {"Bya. J ?fnfhtb"};
  const char confScr6[] PROGMEM = {"Yfcnhjqrf"};
  const char confScr7[] PROGMEM = {"Cj[hfybnm B Dsqnb"};

  const char infoScr1[] PROGMEM = {"Ghj,tu"};
  const char infoScr2[] PROGMEM = {"Dhtvz hf,jns"};

  const char battScr[] PROGMEM = {">>Njhvjp lkz ds[jlf<<"};

  const char M365CfgScr1[] PROGMEM = {"Rhebp rjynhjkm: "};
  const char M365CfgScr2[] PROGMEM = {">>J,yjdbnm rhebp<<"};
  const char M365CfgScr3[] PROGMEM = {"Pflybq Ajyfhm: "};
  const char M365CfgScr4[] PROGMEM = {">>J,yjdbnm Ajyfhm<<"};
  const char M365CfgScr5[] PROGMEM = {"Htregthfwbz: "};
  const char M365CfgScr6[] PROGMEM = {">>J,yjdbnm htr.<<"};
  const char M365CfgScr8[] PROGMEM = {"--------Dsqnb-------"};
  const char M365CfgScr7[] PROGMEM = {"Hfpvth rjktcf:  "};
  
  const char l_85inch[] PROGMEM = {"8.5\""};
  const char l_10inch[] PROGMEM = {" 10\""};

  const char l_Weak[] PROGMEM =   {" CKF,J"};
  const char l_Medium[] PROGMEM = {"CHTLYT"};
  const char l_Strong[] PROGMEM = {"CBKMYJ"};

  const char l_Yes[] PROGMEM = {" LF"};
  const char l_No[] PROGMEM =  {"YTN"};
  const char l_On[] PROGMEM =  {" DRK"};
  const char l_Off[] PROGMEM = {"DSRK"};

  const char l_km[] PROGMEM = {"RV"};
  const char l_kmh[] PROGMEM = {"RV/X"};
  const char l_mah[] PROGMEM = {"vFx"};
  const char l_v[] PROGMEM = {"D"};
  const char l_a[] PROGMEM = {"F"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"N"};
  #endif
  
  #ifdef LANG_ES
  #define defaultFont System5x7mod

  const char noBUS1[] PROGMEM = {"BUS no"};
  const char noBUS2[] PROGMEM = {"conectado"};
  const char noBUS3[] PROGMEM = {"pantalla"};
  const char noBUS4[] PROGMEM = {"sin datos"};

  const char confScr1[] PROGMEM = {"Gran velocimet.: "};
  const char confScr2[] PROGMEM = {"Gran veloc.: "};
  const char confScr2a[] PROGMEM = {"    KMH"};
  const char confScr2b[] PROGMEM = {"ENERGIA"};
  const char confScr3[] PROGMEM = {"Alarma bateria : "};
  const char confScr4[] PROGMEM = {"Gran alar. bat.: "};
  const char confScr5[] PROGMEM = {"Informacion "};
  const char confScr6[] PROGMEM = {"Configurar M365"};
  const char confScr7[] PROGMEM = {"Grabar y salir"};

  const char infoScr1[] PROGMEM = {"Distancia total"};
  const char infoScr2[] PROGMEM = {"Tiempo encendido"};

  const char battScr[] PROGMEM = {">>> Freno para salir <<<"};

  const char M365CfgScr1[] PROGMEM = {"Control crucero: "};
  const char M365CfgScr2[] PROGMEM = {"Actualizar crucero"};
  const char M365CfgScr3[] PROGMEM = {"Luz trasera:    "};
  const char M365CfgScr4[] PROGMEM = {"Actual. luz tras."};
  const char M365CfgScr5[] PROGMEM = {"KERS:        "};
  const char M365CfgScr6[] PROGMEM = {"Actualizar KERS"};
  const char M365CfgScr8[] PROGMEM = {"Salir"};
  const char M365CfgScr7[] PROGMEM = {"Tipo de Rueda:  "};

  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};

  const char l_Weak[] PROGMEM =   {" DEBIL"};
  const char l_Medium[] PROGMEM = {" MEDIO"};
  const char l_Strong[] PROGMEM = {"FUERTE"};

  const char l_Yes[] PROGMEM = {" SI"};
  const char l_No[] PROGMEM =  {" NO"};
  const char l_On[] PROGMEM =  {" ON"};
  const char l_Off[] PROGMEM = {"OFF"};

  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
  #endif

  #ifdef LANG_CZ
  #define defaultFont System5x7mod

  const char noBUS1[] PROGMEM = {" Displej"};
  const char noBUS2[] PROGMEM = {"   neni   "};
  const char noBUS3[] PROGMEM = {"  spravne "};
  const char noBUS4[] PROGMEM = {" zapojen !"};

  const char confScr1[] PROGMEM = {"Velky rychlomer: "};
  const char confScr2[] PROGMEM = {"Velky rych.:"};          //Velky rychlomer
  const char confScr2a[] PROGMEM = {"RYCHLOST"};
  const char confScr2b[] PROGMEM = {"   PROUD"};
  const char confScr3[] PROGMEM = {"Varovani baterie:"};
  const char confScr4[] PROGMEM = {"Velke varo. bat.:"};    //Velke varovani baterie
  const char confScr5[] PROGMEM = {"Info o baterii >"};
  const char confScr6[] PROGMEM = {"Nastaveni M365 >"};
  const char confScr7[] PROGMEM = {"Ulozit a odejit"};

  const char infoScr1[] PROGMEM = {"Celkova vzdalenost"};
  const char infoScr2[] PROGMEM = {"Cas od zapnuti"};

  const char battScr[] PROGMEM = {">>>  Brzdou zpet  <<<"};

  const char M365CfgScr1[] PROGMEM = {"Tempomat:        "};
  const char M365CfgScr2[] PROGMEM = {"Uloz nast. tempomatu"};
  const char M365CfgScr3[] PROGMEM = {"Zadni svetlo ZAP:"};
  const char M365CfgScr4[] PROGMEM = {"Uloz nast. z.svetla"};
  const char M365CfgScr5[] PROGMEM = {"Rekuperace:  "};
  const char M365CfgScr6[] PROGMEM = {"Uloz nast. rekuper."};
  const char M365CfgScr8[] PROGMEM = {"< Zpet"};
  const char M365CfgScr7[] PROGMEM = {"Velikost kol:   "};

  const char l_85inch[] PROGMEM = {" 8,5\""};
  const char l_10inch[] PROGMEM = {"  10\""};

  const char l_Weak[] PROGMEM =   {"  SLABA"};
  const char l_Medium[] PROGMEM = {"STREDNI"};
  const char l_Strong[] PROGMEM = {"  SILNA"};

  const char l_Yes[] PROGMEM = {"ANO"};
  const char l_No[] PROGMEM =  {" NE"};
  const char l_On[] PROGMEM =  {"ZAP"};
  const char l_Off[] PROGMEM = {"VYP"};

  const char l_km[] PROGMEM = {"km"};
  const char l_kmh[] PROGMEM = {"km/h"};
  const char l_mah[] PROGMEM = {"mAh"};
  const char l_v[] PROGMEM = {"V"};
  const char l_a[] PROGMEM = {"A"};
  const char l_c[] PROGMEM = {"C"};
  const char l_t[] PROGMEM = {"T"};
  
  #endif
