void fun()
{
  int entity_9 = 75;
  int entity_6 = 99;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', entity_9-1);
  entity_1[entity_9-1]='';
  entity_1[67] = 'B';
}