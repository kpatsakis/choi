void fun()
{
  int entity_0 = 80;
  entity_0 = 61;
  char* entity_7;
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 't', 76-1);
  entity_4[76-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[29-1]='';
  strcpy(entity_7, entity_4);
}