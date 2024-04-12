void fun()
{
  int entity_9 = 5;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'C', entity_9-1);
  entity_5[entity_9-1]='';
  entity_9 = 67;
  entity_5[31] = 'e';
}