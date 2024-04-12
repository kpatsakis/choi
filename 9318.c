void fun()
{
  int entity_5 = 95;
  char entity_4[39] = "";
  entity_4 = NULL;
  char entity_0 = 'A';
  char entity_7[5] = "";
  entity_7 = NULL;
  memset(entity_4, 'L', 39-1);
  entity_4[39-1]='';
  memset(entity_7, 'U', 5-1);
  entity_7[5-1]='';
  entity_4[entity_5] = 'c';
}