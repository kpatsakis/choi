void fun()
{
  int entity_1 = 28;
  entity_1 = 19;
  char entity_9[55] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', 55-1);
  entity_9[55-1]='';
  entity_9[entity_1] = 'X';
}