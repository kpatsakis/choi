void fun()
{
  int entity_5 = 18;
  char entity_9[48] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', 48-1);
  entity_9[48-1]='';
  entity_9[entity_5] = 's';
}