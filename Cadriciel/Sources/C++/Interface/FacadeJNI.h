/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class InterfaceGraphique_Demarrage */

#ifndef _Included_InterfaceGraphique_Demarrage
#define _Included_InterfaceGraphique_Demarrage
#ifdef __cplusplus
extern "C" {
#endif
#undef InterfaceGraphique_Demarrage_TEMPS_INTER_AFFICHAGE
#define InterfaceGraphique_Demarrage_TEMPS_INTER_AFFICHAGE 20L
/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_initialiserOpenGL
 * Signature: (Ljava/awt/Canvas;)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1initialiserOpenGL
  (JNIEnv *, jclass, jobject);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_initialiser
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1initialiser
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_initialiserModeEdition
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1initialiserModeEdition
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_initialiserModePartieRapide
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1initialiserModePartieRapide
  (JNIEnv *, jclass, jint, jint, jstring);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_initialiserModeCampagne
 * Signature: (II[Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1initialiserModeCampagne
  (JNIEnv *, jclass, jint, jint, jobjectArray);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_obtenirInformationsPartie
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_InterfaceGraphique_Demarrage_fctC_1obtenirInformationsPartie
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_initialiserModeTest
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1initialiserModeTest
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_libererOpenGL
 * Signature: (Ljava/awt/Canvas;)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1libererOpenGL
  (JNIEnv *, jclass, jobject);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_dessinerOpenGL
 * Signature: (Ljava/awt/Canvas;Z)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1dessinerOpenGL
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_redimensionnerFenetre
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1redimensionnerFenetre
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_animer
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1animer
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_zoomIn
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1zoomIn
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_zoomOut
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1zoomOut
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    obtenirAffichagesParSeconde
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_InterfaceGraphique_Demarrage_obtenirAffichagesParSeconde
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_executerTests
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_InterfaceGraphique_Demarrage_fctC_1executerTests
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_envoyerInput
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1envoyerInput
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCanvasSizeMax
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCanvasSizeMax
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCommandeDeplacement
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCommandeDeplacement
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCommandeDuplication
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCommandeDuplication
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCommandeZoomLoupe
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCommandeZoomLoupe
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCommandeMiseAEchelle
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCommandeMiseAEchelle
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCommandeRotation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCommandeRotation
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCommandeSelection
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCommandeSelection
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setCommandeSuppression
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setCommandeSuppression
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_creerBonus
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1creerBonus
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_creerPortail
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1creerPortail
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_creerBarriere
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1creerBarriere
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_creerStation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1creerStation
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_annulerCommande
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1annulerCommande
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_enregistrer
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_InterfaceGraphique_Demarrage_fctC_1enregistrer
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_enregistrerSous
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1enregistrerSous
  (JNIEnv *, jclass, jstring);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_changerModeVue
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1changerModeVue
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_sauvegardeConfiguration
 * Signature: (IIIIIIIIIIDIZZZZZZZ)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1sauvegardeConfiguration
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jdouble, jint, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_chargerConfiguration
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_InterfaceGraphique_Demarrage_fctC_1chargerConfiguration
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_sauvegardeCampagne
 * Signature: (II[Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1sauvegardeCampagne
  (JNIEnv *, jclass, jint, jint, jobjectArray);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_chargerCampagne
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_InterfaceGraphique_Demarrage_fctC_1chargerCampagne
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_charger
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1charger
  (JNIEnv *, jclass, jstring);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setProprietesZoneJeu
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setProprietesZoneJeu
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_getProprietesZoneJeu
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_InterfaceGraphique_Demarrage_fctC_1getProprietesZoneJeu
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_setPositionAngleScale
 * Signature: (FFFFFFF)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1setPositionAngleScale
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_getPositionAngleScaleType
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_InterfaceGraphique_Demarrage_fctC_1getPositionAngleScaleType
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_getNombreObjetsSelectionnes
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_InterfaceGraphique_Demarrage_fctC_1getNombreObjetsSelectionnes
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_getTempsPartie
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_InterfaceGraphique_Demarrage_fctC_1getTempsPartie
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_getStatutPartie
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_InterfaceGraphique_Demarrage_fctC_1getStatutPartie
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_estDansLeMenuPrincipal
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1estDansLeMenuPrincipal
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_allumerLumiereAmbiante
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1allumerLumiereAmbiante
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_eteindreLumiereAmbiante
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1eteindreLumiereAmbiante
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_allumerLumiereDiffuse
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1allumerLumiereDiffuse
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_eteindreLumiereDiffuse
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1eteindreLumiereDiffuse
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_allumerLumiereSpot
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1allumerLumiereSpot
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_eteindreLumiereSpot
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1eteindreLumiereSpot
  (JNIEnv *, jclass);

/*
 * Class:     InterfaceGraphique_Demarrage
 * Method:    fctC_multipleInputVaisseau
 * Signature: ([II)V
 */
JNIEXPORT void JNICALL Java_InterfaceGraphique_Demarrage_fctC_1multipleInputVaisseau
  (JNIEnv *, jclass, jintArray, jint);

#ifdef __cplusplus
}
#endif
#endif
