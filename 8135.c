void fun()
{
  int entity_2 = 8;
  char entity_6[15] = "";
  entity_6 = NULL;
  memset(entity_6, 'k', 15-1);
  entity_6[15-1]='';
  entity_6[54] = 'A';
}