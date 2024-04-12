void fun()
{
  int entity_1 = 88;
  char entity_9[3] = "";
  entity_9 = NULL;
  memset(entity_9, 'c', 3-1);
  entity_9[3-1]='';
  entity_9[entity_1] = 'c';
}