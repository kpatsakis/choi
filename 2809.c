void fun()
{
  int entity_2 = 68;
  int entity_9 = 31;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', entity_9-1);
  entity_5[entity_9-1]='';
  entity_5[63] = 'h';
}