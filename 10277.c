void fun()
{
  char entity_3[50] = "";
  char entity_7[79] = "";
  memset(entity_7, 'D', 79-1);
  entity_7[79-1]='0';
  memset(entity_3, 'a', 50-1);
  entity_3[50-1]='0';
  entity_7[85] = 'm';
}