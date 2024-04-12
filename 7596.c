void fun()
{
  int entity_9 = 55;
  char entity_5[42] = "";
  entity_5 = NULL;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'R', entity_9-1);
  entity_1[entity_9-1]='';
  memset(entity_5, 'a', 42-1);
  entity_5[42-1]='';
  entity_9 = 75;
  entity_1[94] = 'g';
}