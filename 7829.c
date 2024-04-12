void fun()
{
  int entity_3 = 19;
  char* entity_5;
  char entity_9[81] = "";
  entity_9 = NULL;
  char entity_1[53] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_1, 'W', 53-1);
  entity_1[53-1]='';
  memset(entity_9, 'B', 81-1);
  entity_9[81-1]='';
  memcpy(entity_5, entity_1, 53*sizeof(char));
}