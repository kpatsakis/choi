void fun()
{
  int entity_1 = 43;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'E', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[96] = 'J';
}