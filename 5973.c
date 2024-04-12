void fun()
{
  int entity_4 = 41;
  char* entity_0;
  char entity_7 = 'c';
  char entity_9[32] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_9, 'n', 32-1);
  entity_9[32-1]='';
  entity_4 = 63;
  memcpy(entity_0, entity_9, 32*sizeof(char));
}