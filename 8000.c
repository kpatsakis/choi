void fun()
{
  int entity_7 = 97;
  entity_7 = 87;
  char entity_8[25] = "";
  entity_8 = NULL;
  memset(entity_8, 'l', 25-1);
  entity_8[25-1]='';
  entity_8[entity_7] = 'A';
}