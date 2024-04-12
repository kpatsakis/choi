void fun()
{
  int entity_5 = 89;
  char entity_3[3] = "";
  char entity_2[44] = "";
  memset(entity_2, 'y', 44-1);
  entity_2[44-1]='0';
  memset(entity_3, 'n', 3-1);
  entity_3[3-1]='0';
  entity_3[68] = 'z';
}