void fun()
{
  int entity_5 = 93;
  char entity_9[13] = "";
  entity_9 = NULL;
  memset(entity_9, 'R', 13-1);
  entity_9[13-1]='';
  entity_9[entity_5] = 'j';
}