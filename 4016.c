void fun()
{
  int entity_5 = 63;
  int entity_9 = 95;
  char entity_4[49] = "";
  entity_4 = NULL;
  memset(entity_4, 'd', 49-1);
  entity_4[49-1]='';
  entity_4[entity_5] = 'W';
}