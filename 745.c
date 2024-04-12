void fun()
{
  int entity_0 = 56;
  int entity_4 = 76;
  char* entity_9;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char entity_1[71] = "";
  entity_1 = NULL;
  memset(entity_5, 'D', entity_4-1);
  entity_5[entity_4-1]='';
  memset(entity_1, 'd', 71-1);
  entity_1[71-1]='';
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  memcpy(entity_9, entity_5, entity_4*sizeof(char));
}