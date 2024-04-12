void fun()
{
  int entity_3 = 71;
  char entity_1[65] = "";
  entity_1 = NULL;
  memset(entity_1, 'w', 65-1);
  entity_1[65-1]='';
  entity_3 = 64;
  entity_1[entity_3] = 'b';
}