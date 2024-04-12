void fun()
{
  int entity_3 = 76;
  entity_3 = 51;
  char entity_0[85] = "";
  entity_0 = NULL;
  memset(entity_0, 'c', 85-1);
  entity_0[85-1]='';
  entity_0[entity_3] = 'f';
}