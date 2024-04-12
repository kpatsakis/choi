void fun()
{
  int entity_1 = 25;
  int entity_0 = 80;
  int entity_9 = 88;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'U', entity_9-1);
  entity_5[entity_9-1]='';
  entity_5[33] = 'Q';
}