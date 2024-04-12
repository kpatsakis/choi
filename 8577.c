void fun()
{
  char entity_1[60] = "";
  entity_1 = NULL;
  char entity_2[74] = "";
  entity_2 = NULL;
  char entity_0[8] = "";
  entity_0 = NULL;
  memset(entity_1, 'H', 60-1);
  entity_1[60-1]='';
  memset(entity_0, 'W', 8-1);
  entity_0[8-1]='';
  memset(entity_2, 'p', 74-1);
  entity_2[74-1]='';
  entity_0[63] = 'j';
}