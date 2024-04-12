void fun()
{
  char entity_4[44] = "";
  char entity_7[50] = "";
  memset(entity_4, 'p', 44-1);
  entity_4[44-1]='0';
  memset(entity_7, 'X', 50-1);
  entity_7[50-1]='0';
  entity_7[93] = 'n';
}