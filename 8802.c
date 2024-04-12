void fun()
{
  int entity_6 = 33;
  char entity_9[19] = "";
  entity_9 = NULL;
  memset(entity_9, 'a', 19-1);
  entity_9[19-1]='';
  entity_9[entity_6] = 'd';
}