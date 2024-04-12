void fun()
{
  int entity_4 = 93;
  int entity_7 = 31;
  char entity_9[15] = "";
  entity_9 = NULL;
  memset(entity_9, 'S', 15-1);
  entity_9[15-1]='';
  entity_9[entity_4] = 'B';
}