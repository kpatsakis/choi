void fun()
{
  int entity_7 = 87;
  int entity_8 = 28;
  entity_8 = 14;
  char entity_5 = 'P';
  char entity_3[80] = "";
  entity_3 = NULL;
  memset(entity_3, 'X', 80-1);
  entity_3[80-1]='';
  entity_3[entity_8] = 'b';
}