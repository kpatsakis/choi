void fun()
{
  int entity_2 = 54;
  entity_2 = 92;
  char entity_0[63] = "";
  entity_0 = NULL;
  memset(entity_0, 'A', 63-1);
  entity_0[63-1]='';
  entity_0[entity_2] = 'C';
}