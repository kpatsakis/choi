void fun()
{
  int entity_5 = 43;
  int entity_4 = 85;
  char entity_9[30] = "";
  entity_9 = NULL;
  memset(entity_9, 'm', 30-1);
  entity_9[30-1]='';
  entity_9[entity_4] = 'H';
}