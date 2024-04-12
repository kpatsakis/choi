void fun()
{
  int entity_9 = 32;
  entity_9 = 98;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'n', entity_9-1);
  entity_5[entity_9-1]='';
  entity_5[92] = 'D';
}