void fun()
{
  int entity_1 = 46;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', entity_1-1);
  entity_9[entity_1-1]='';
  entity_1 = 55;
  entity_9[51] = 'P';
}