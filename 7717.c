void fun()
{
  int entity_1 = 41;
  char entity_3[88] = "";
  entity_3 = NULL;
  char entity_0[89] = "";
  entity_0 = NULL;
  memset(entity_3, 'Z', 88-1);
  entity_3[88-1]='';
  memset(entity_0, 'y', 89-1);
  entity_0[89-1]='';
  entity_0[22] = 't';
}