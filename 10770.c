void fun()
{
  char entity_5[17] = "";
  char entity_7[10] = "";
  memset(entity_5, 'f', 17-1);
  entity_5[17-1]='0';
  memset(entity_7, 'a', 10-1);
  entity_7[10-1]='0';
  entity_5[81] = 'E';
}