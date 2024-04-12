void fun()
{
  int entity_7 = 77;
  char* entity_9;
  char entity_8 = 'f';
  char* entity_4;
  char entity_5[98] = "";
  entity_5 = NULL;
  char entity_6[96] = "";
  entity_6 = NULL;
  memset(entity_5, 'b', 98-1);
  entity_5[98-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_6, 'P', 96-1);
  entity_6[96-1]='';
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[29-1]='';
  strcpy(entity_4, entity_6);
}