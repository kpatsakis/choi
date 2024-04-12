void fun()
{
  int entity_1 = 73;
  char entity_0[19] = "";
  entity_0 = NULL;
  char entity_2[55] = "";
  entity_2 = NULL;
  memset(entity_2, 'c', 55-1);
  entity_2[55-1]='';
  memset(entity_0, 'm', 19-1);
  entity_0[19-1]='';
  entity_2[entity_1] = 'j';
}