void fun()
{
  int entity_3 = 49;
  char entity_4 = 'F';
  char entity_8[81] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 81-1);
  entity_8[81-1]='';
  entity_3 = 45;
  entity_8[entity_3] = 'h';
}