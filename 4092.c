void fun()
{
  int entity_9 = 45;
  entity_9 = 99;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'I', entity_9-1);
  entity_5[entity_9-1]='';
  entity_5[21] = 'H';
}