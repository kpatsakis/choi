void fun()
{
  int entity_5 = 42;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'X', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[64] = 'R';
}