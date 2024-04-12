void fun()
{
  char entity_1[60] = "";
  char entity_4[44] = "";
  memset(entity_1, 'E', 60-1);
  entity_1[60-1]='0';
  memset(entity_4, 'x', 44-1);
  entity_4[44-1]='0';
  entity_1[15] = 'o';
}