void fun()
{
  int entity_1 = 35;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[35] = 'V';
}