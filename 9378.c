void fun()
{
  int entity_9 = 56;
  entity_9 = 26;
  char entity_8[16] = "";
  entity_8 = NULL;
  char entity_5[18] = "";
  entity_5 = NULL;
  char entity_4[69] = "";
  entity_4 = NULL;
  memset(entity_8, 'H', 16-1);
  entity_8[16-1]='';
  memset(entity_5, 'L', 18-1);
  entity_5[18-1]='';
  memset(entity_4, 'v', 69-1);
  entity_4[69-1]='';
  entity_8[entity_9] = 'U';
}