void fun()
{
  int entity_8 = 79;
  char entity_1[81] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_2[24] = "";
  entity_2 = NULL;
  char entity_9[52] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_2, 'P', 24-1);
  entity_2[24-1]='';
  memset(entity_9, 'k', 52-1);
  entity_9[52-1]='';
  memset(entity_1, 'J', 81-1);
  entity_1[81-1]='';
  strcpy(entity_7, entity_1);
}