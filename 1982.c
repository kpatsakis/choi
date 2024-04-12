void fun()
{
  int entity_1 = 20;
  int entity_5 = 66;
  entity_1 = 41;
  char entity_0[65] = "";
  entity_0 = NULL;
  char entity_3[69] = "";
  entity_3 = NULL;
  char entity_4[85] = "";
  entity_4 = NULL;
  memset(entity_0, 'p', 65-1);
  entity_0[65-1]='';
  memset(entity_4, 'p', 85-1);
  entity_4[85-1]='';
  memset(entity_3, 'M', 69-1);
  entity_3[69-1]='';
  entity_3[entity_1] = 'B';
}