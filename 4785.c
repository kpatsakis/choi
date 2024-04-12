void fun()
{
  int entity_1 = 5;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char entity_9[39] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', 39-1);
  entity_9[39-1]='';
  memset(entity_4, 'k', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[12] = 'v';
}