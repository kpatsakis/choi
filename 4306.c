void fun()
{
  int entity_9 = 39;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char entity_5[67] = "";
  entity_5 = NULL;
  memset(entity_4, 'g', entity_9-1);
  entity_4[entity_9-1]='';
  memset(entity_5, 'g', 67-1);
  entity_5[67-1]='';
  entity_9 = 37;
  entity_4[98] = 'x';
}