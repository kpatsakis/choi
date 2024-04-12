void fun()
{
  int entity_3 = 86;
  char entity_9[5] = "";
  entity_9 = NULL;
  memset(entity_9, 'i', 5-1);
  entity_9[5-1]='';
  entity_3 = 78;
  entity_9[entity_3] = 'm';
}