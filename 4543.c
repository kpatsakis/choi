void fun()
{
  int entity_3 = 42;
  entity_3 = 96;
  char entity_5[96] = "";
  entity_5 = NULL;
  memset(entity_5, 'Z', 96-1);
  entity_5[96-1]='';
  entity_5[entity_3] = 'p';
}