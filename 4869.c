void fun()
{
  char entity_0[11] = "";
  entity_0 = NULL;
  char entity_1[19] = "";
  entity_1 = NULL;
  memset(entity_0, 'r', 11-1);
  entity_0[11-1]='';
  memset(entity_1, 'h', 19-1);
  entity_1[19-1]='';
  entity_0[9] = 'o';
}