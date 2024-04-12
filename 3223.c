void fun()
{
  int entity_6 = 63;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', entity_6-1);
  entity_9[entity_6-1]='';
  entity_9[64] = 'm';
}