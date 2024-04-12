void fun()
{
  int entity_5 = 2;
  char entity_9[56] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 56-1);
  entity_9[56-1]='';
  entity_9[entity_5] = 'd';
}