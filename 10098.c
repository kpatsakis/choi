void fun()
{
  char entity_8[38] = "";
  char entity_1[22] = "";
  memset(entity_1, 'Y', 22-1);
  entity_1[22-1]='0';
  memset(entity_8, 'q', 38-1);
  entity_8[38-1]='0';
  entity_8[11] = 'D';
}