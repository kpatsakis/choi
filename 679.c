void fun()
{
  int entity_6 = 42;
  int entity_3 = 91;
  char entity_5[88] = "";
  entity_5 = NULL;
  memset(entity_5, 'h', 88-1);
  entity_5[88-1]='';
  entity_5[entity_3] = 'r';
}