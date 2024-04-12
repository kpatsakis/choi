void fun()
{
  int entity_6 = 25;
  entity_6 = 52;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_9, 'y', entity_6-1);
  entity_9[entity_6-1]='';
  entity_9[86] = 'a';
}