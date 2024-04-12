void fun()
{
  int entity_1 = 15;
  char entity_5[29] = "";
  entity_5 = NULL;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_5, 'e', 29-1);
  entity_5[29-1]='';
  memset(entity_4, 'C', entity_1-1);
  entity_4[entity_1-1]='';
  entity_1 = 14;
  entity_4[65] = 'v';
}