void fun()
{
  int entity_3 = 12;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'a', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[58] = 't';
}