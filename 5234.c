void fun()
{
  int entity_2 = 53;
  char entity_3[23] = "";
  entity_3 = NULL;
  char entity_0[9] = "";
  entity_0 = NULL;
  memset(entity_3, 'a', 23-1);
  entity_3[23-1]='';
  memset(entity_0, 'N', 9-1);
  entity_0[9-1]='';
  entity_3[entity_2] = 'z';
}