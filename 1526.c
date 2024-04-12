void fun()
{
  int entity_8 = 66;
  char entity_9[60] = "";
  entity_9 = NULL;
  char entity_5[41] = "";
  entity_5 = NULL;
  char entity_7[12] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_5, 'C', 41-1);
  entity_5[41-1]='';
  memset(entity_7, 'x', 12-1);
  entity_7[12-1]='';
  memset(entity_9, 'M', 60-1);
  entity_9[60-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_7);
}