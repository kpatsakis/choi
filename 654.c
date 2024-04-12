void fun()
{
  int entity_7 = 39;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'X', entity_7-1);
  entity_9[entity_7-1]='';
  entity_7 = 22;
  entity_9[29] = 'w';
}