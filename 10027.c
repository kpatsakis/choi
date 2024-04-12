void fun()
{
  char entity_7[12] = "";
  char entity_4[8] = "";
  char entity_6[11] = "";
  memset(entity_6, 'n', 11-1);
  entity_6[11-1]='0';
  memset(entity_7, 'O', 12-1);
  entity_7[12-1]='0';
  memset(entity_4, 'H', 8-1);
  entity_4[8-1]='0';
  entity_7[47] = 'F';
}