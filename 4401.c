void fun()
{
  int entity_6 = 23;
  char entity_9[64] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_7[60] = "";
  entity_7 = NULL;
  char entity_5[13] = "";
  entity_5 = NULL;
  memset(entity_5, 'N', 13-1);
  entity_5[13-1]='';
  memset(entity_9, 'K', 64-1);
  entity_9[64-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_7, 'Y', 60-1);
  entity_7[60-1]='';
  entity_6 = 57;
  strcpy(entity_3, entity_9);
}