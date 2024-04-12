void fun()
{
  int entity_5 = 18;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_7[25] = "";
  entity_7 = NULL;
  char entity_9 = 's';
  memset(entity_1, 'S', entity_5-1);
  entity_1[entity_5-1]='';
  memset(entity_7, 'A', 25-1);
  entity_7[25-1]='';
  entity_1[23] = 'X';
}