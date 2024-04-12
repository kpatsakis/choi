void fun()
{
  int entity_9 = 16;
  char entity_1[95] = "";
  entity_1 = NULL;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_1, 'o', 95-1);
  entity_1[95-1]='';
  memset(entity_5, 'f', entity_9-1);
  entity_5[entity_9-1]='';
  entity_5[71] = 'd';
}