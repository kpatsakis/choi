void fun()
{
  int entity_9 = 67;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'q', entity_9-1);
  entity_5[entity_9-1]='';
  entity_9 = 57;
  entity_5[93] = 'B';
}