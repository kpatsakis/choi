void fun()
{
  int entity_6 = 88;
  char entity_5[26] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_3[41] = "";
  entity_3 = NULL;
  char entity_7[1] = "";
  entity_7 = NULL;
  memset(entity_3, 'T', 41-1);
  entity_3[41-1]='';
  memset(entity_5, 'G', 26-1);
  entity_5[26-1]='';
  memset(entity_7, 'N', 1-1);
  entity_7[1-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  strcpy(entity_9, entity_3);
}