void fun()
{
  int entity_7 = 38;
  int entity_6 = 46;
  char entity_2[80] = "";
  entity_2 = NULL;
  char entity_3[80] = "";
  entity_3 = NULL;
  memset(entity_2, 'p', 80-1);
  entity_2[80-1]='';
  memset(entity_3, 'M', 80-1);
  entity_3[80-1]='';
  entity_3[63] = 'u';
}