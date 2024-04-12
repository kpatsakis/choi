void fun()
{
  char entity_2[44] = "";
  char entity_4 = 'w';
  char entity_3 = 'B';
  memset(entity_2, 'x', 44-1);
  entity_2[44-1]='0';
  entity_2[8] = 'L';
}