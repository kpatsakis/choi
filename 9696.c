void fun()
{
  int entity_9 = 35;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'f', entity_9-1);
  entity_5[entity_9-1]='';
  entity_9 = 87;
  entity_5[35] = 'B';
}