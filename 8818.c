void fun()
{
  int entity_0 = 100;
  char entity_5[62] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_8;
  char* entity_4;
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[29-1]='';
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  memset(entity_5, 'U', 62-1);
  entity_5[62-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  strcpy(entity_8, entity_5);
}