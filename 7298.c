void fun()
{
  int entity_3 = 23;
  int entity_9 = 31;
  entity_3 = 41;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'n', entity_3-1);
  entity_5[entity_3-1]='';
  entity_5[34] = 'g';
}