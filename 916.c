void fun()
{
  int entity_5 = 1;
  char entity_9[54] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_2 = 'M';
  memset(entity_9, 'X', 54-1);
  entity_9[54-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_5 = 77;
  memcpy(entity_0, entity_9, 54*sizeof(char));
}