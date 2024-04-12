void fun()
{
  int entity_5 = 90;
  char entity_9[30] = "";
  entity_9 = NULL;
  memset(entity_9, 'B', 30-1);
  entity_9[30-1]='';
  entity_9[entity_5] = 'H';
}