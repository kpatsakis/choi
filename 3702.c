void fun()
{
  int entity_5 = 87;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'W', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[15] = 'm';
}