void fun()
{
  int entity_6 = 18;
  int entity_9 = 71;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'c', entity_9-1);
  entity_4[entity_9-1]='';
  entity_4[5] = 'c';
}