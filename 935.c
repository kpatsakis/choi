void fun()
{
  int entity_3 = 48;
  int entity_8 = 34;
  char entity_0[33] = "";
  entity_0 = NULL;
  char entity_2[85] = "";
  entity_2 = NULL;
  memset(entity_0, 'L', 33-1);
  entity_0[33-1]='';
  memset(entity_2, 'c', 85-1);
  entity_2[85-1]='';
  entity_0[entity_3] = 'x';
}