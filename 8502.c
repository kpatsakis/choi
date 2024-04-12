void fun()
{
  int entity_5 = 75;
  char entity_6 = 'V';
  char entity_9[31] = "";
  entity_9 = NULL;
  memset(entity_9, 'H', 31-1);
  entity_9[31-1]='';
  entity_9[entity_5] = 'D';
}