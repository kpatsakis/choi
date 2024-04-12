void fun()
{
  int entity_4 = 54;
  char entity_5[54] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_9[41] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_9, 'C', 41-1);
  entity_9[41-1]='';
  memset(entity_5, 'H', 54-1);
  entity_5[54-1]='';
  memcpy(entity_1, entity_9, 41*sizeof(char));
}