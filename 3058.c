void fun()
{
  int entity_0 = 17;
  int entity_6 = 11;
  char entity_3[91] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_1[4] = "";
  entity_1 = NULL;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  memset(entity_4, 'Z', entity_6-1);
  entity_4[entity_6-1]='';
  memset(entity_3, 'P', 91-1);
  entity_3[91-1]='';
  memset(entity_1, 'E', 4-1);
  entity_1[4-1]='';
  strcpy(entity_9, entity_4);
}