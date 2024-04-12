void fun()
{
  int entity_2 = 75;
  int entity_9 = 90;
  int entity_7 = 41;
  entity_7 = 41;
  char entity_8[19] = "";
  entity_8 = NULL;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_8, 'U', 19-1);
  entity_8[19-1]='';
  memset(entity_1, 'V', entity_7-1);
  entity_1[entity_7-1]='';
  entity_0 = (char*)malloc(54*sizeof(char));
  entity_0[54-1]='';
  strcpy(entity_0, entity_1);
}