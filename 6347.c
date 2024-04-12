void fun()
{
  int entity_4 = 76;
  entity_4 = 67;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char entity_1[14] = "";
  entity_1 = NULL;
  char entity_3[64] = "";
  entity_3 = NULL;
  memset(entity_3, 't', 64-1);
  entity_3[64-1]='';
  memset(entity_1, 'G', 14-1);
  entity_1[14-1]='';
  memset(entity_5, 'I', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[2] = 'b';
}