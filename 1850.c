void fun()
{
  int entity_8 = 47;
  int entity_5 = 20;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', entity_5-1);
  entity_9[entity_5-1]='';
  entity_9[91] = 't';
}