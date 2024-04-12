void fun()
{
  char entity_1 = 'X';
  char entity_9[89] = "";
  char entity_3[17] = "";
  memset(entity_9, 'm', 89-1);
  entity_9[89-1]='0';
  memset(entity_3, 's', 17-1);
  entity_3[17-1]='0';
  entity_3[11] = 'Q';
}