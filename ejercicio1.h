int cadenas(char cadena[],char caracter){
  int longitud = strlen(cadena);
  for(int i=0; i<longitud; i++){
    if(cadena[i]==caracter){
      return i;
    }
  }
  return 0;
}
