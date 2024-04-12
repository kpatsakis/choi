void fun()
{
  int entity_2 = 22;
  char entity_3[44] = "";
  entity_3 = NULL;
  memset(entity_3, 'k', 44-1);
  entity_3[44-1]='';
  entity_3[entity_2] = 'X';
}