void fun()
{
  int entity_6 = 56;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', entity_6-1);
  entity_8[entity_6-1]='';
  entity_8[7] = 'X';
}