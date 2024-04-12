void fun()
{
  int entity_6 = 26;
  char entity_9[33] = "";
  entity_9 = NULL;
  memset(entity_9, 'h', 33-1);
  entity_9[33-1]='';
  entity_9[entity_6] = 'o';
}