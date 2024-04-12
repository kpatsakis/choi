void fun()
{
  int entity_3 = 41;
  char entity_4[25] = "";
  entity_4 = NULL;
  char entity_1[23] = "";
  entity_1 = NULL;
  memset(entity_1, 'q', 23-1);
  entity_1[23-1]='';
  memset(entity_4, 'p', 25-1);
  entity_4[25-1]='';
  entity_1[entity_3] = 'r';
}