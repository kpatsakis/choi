void fun()
{
  char entity_3[12] = "";
  entity_3 = NULL;
  char entity_7[30] = "";
  entity_7 = NULL;
  char entity_0[1] = "";
  entity_0 = NULL;
  memset(entity_3, 'F', 12-1);
  entity_3[12-1]='';
  memset(entity_7, 'e', 30-1);
  entity_7[30-1]='';
  memset(entity_0, 'H', 1-1);
  entity_0[1-1]='';
  entity_7[7] = 'R';
}