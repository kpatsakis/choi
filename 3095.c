void fun()
{
  int entity_2 = 50;
  entity_2 = 52;
  char entity_9[23] = "";
  entity_9 = NULL;
  memset(entity_9, 'H', 23-1);
  entity_9[23-1]='';
  entity_9[entity_2] = 'M';
}