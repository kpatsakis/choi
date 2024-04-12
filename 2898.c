void fun()
{
  int entity_8 = 83;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char entity_7[65] = "";
  entity_7 = NULL;
  char entity_0[84] = "";
  entity_0 = NULL;
  memset(entity_5, 'T', entity_8-1);
  entity_5[entity_8-1]='';
  memset(entity_7, 'L', 65-1);
  entity_7[65-1]='';
  memset(entity_0, 'q', 84-1);
  entity_0[84-1]='';
  entity_5[25] = 'J';
}