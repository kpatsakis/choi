void fun()
{
  int entity_7 = 77;
  char entity_8[2] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 2-1);
  entity_8[2-1]='';
  entity_8[80] = 'w';
}