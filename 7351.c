void fun()
{
  int entity_7 = 32;
  char entity_9[32] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_6, 'x', 14-1);
  entity_6[14-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_9, 'm', 32-1);
  entity_9[32-1]='';
  strcpy(entity_1, entity_6);
}