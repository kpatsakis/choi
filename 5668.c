void fun()
{
  int entity_4 = 61;
  char* entity_9;
  char entity_0[81] = "";
  entity_0 = NULL;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_0, 'O', 81-1);
  entity_0[81-1]='';
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  memset(entity_1, 'P', entity_4-1);
  entity_1[entity_4-1]='';
  memcpy(entity_9, entity_1, entity_4*sizeof(char));
}