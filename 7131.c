void fun()
{
  int entity_0 = 32;
  int entity_5 = 66;
  int entity_8 = 42;
  char* entity_9;
  char entity_7[13] = "";
  entity_7 = NULL;
  char entity_4[19] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memset(entity_4, 'i', 19-1);
  entity_4[19-1]='';
  memset(entity_7, 'w', 13-1);
  entity_7[13-1]='';
  strcpy(entity_9, entity_7);
}