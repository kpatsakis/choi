void fun()
{
  int entity_4 = 54;
  char entity_5[4] = "";
  entity_5 = NULL;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char entity_2[39] = "";
  entity_2 = NULL;
  memset(entity_2, 'l', 39-1);
  entity_2[39-1]='';
  memset(entity_5, 'i', 4-1);
  entity_5[4-1]='';
  memset(entity_0, 'v', entity_4-1);
  entity_0[entity_4-1]='';
  entity_0[33] = 'K';
}