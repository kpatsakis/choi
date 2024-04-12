void fun()
{
  char entity_0[72] = "";
  entity_0 = NULL;
  char entity_1[50] = "";
  entity_1 = NULL;
  memset(entity_0, 'Z', 72-1);
  entity_0[72-1]='';
  memset(entity_1, 'n', 50-1);
  entity_1[50-1]='';
  entity_0[49] = 't';
}