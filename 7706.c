void fun()
{
  int entity_3 = 52;
  int entity_5 = 29;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 10;
  entity_9[53] = 'B';
}