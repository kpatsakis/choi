void fun()
{
  char entity_0[76] = "";
  entity_0 = NULL;
  char entity_1[36] = "";
  entity_1 = NULL;
  memset(entity_0, 'I', 76-1);
  entity_0[76-1]='';
  memset(entity_1, 'b', 36-1);
  entity_1[36-1]='';
  entity_1[17] = 'd';
}