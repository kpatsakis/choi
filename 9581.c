void fun()
{
  int entity_7 = 10;
  char entity_5 = 'k';
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'J', entity_7-1);
  entity_9[entity_7-1]='';
  entity_9[99] = 'E';
}