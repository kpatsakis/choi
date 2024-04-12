void fun()
{
  char entity_5[23] = "";
  char entity_1[22] = "";
  char entity_0 = 'X';
  memset(entity_1, 'F', 22-1);
  entity_1[22-1]='0';
  memset(entity_5, 'S', 23-1);
  entity_5[23-1]='0';
  entity_1[95] = 'h';
}