void fun()
{
  int entity_6 = 68;
  char* entity_8;
  char entity_3[3] = "";
  entity_3 = NULL;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_7[76] = "";
  entity_7 = NULL;
  memset(entity_7, 'l', 76-1);
  entity_7[76-1]='';
  entity_9 = (char*)malloc(27*sizeof(char));
  entity_9[27-1]='';
  entity_8 = (char*)malloc(54*sizeof(char));
  entity_8[54-1]='';
  memset(entity_5, 'v', entity_6-1);
  entity_5[entity_6-1]='';
  memset(entity_3, 'K', 3-1);
  entity_3[3-1]='';
  strcpy(entity_8, entity_5);
}