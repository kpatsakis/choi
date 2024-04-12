void fun()
{
  int entity_3 = 78;
  char* entity_5;
  char entity_7[54] = "";
  entity_7 = NULL;
  char entity_9[11] = "";
  entity_9 = NULL;
  char entity_1 = 'Q';
  memset(entity_9, 'X', 11-1);
  entity_9[11-1]='';
  memset(entity_7, 'F', 54-1);
  entity_7[54-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  strcpy(entity_5, entity_7);
}