void fun()
{
  char entity_9[22] = "";
  char entity_1[46] = "";
  char entity_5 = 'q';
  memset(entity_9, 'Z', 22-1);
  entity_9[22-1]='0';
  memset(entity_1, 'u', 46-1);
  entity_1[46-1]='0';
  entity_9[31] = 'X';
}