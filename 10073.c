void fun()
{
  char entity_1[6] = "";
  char entity_2[91] = "";
  memset(entity_2, 'p', 91-1);
  entity_2[91-1]='0';
  memset(entity_1, 'A', 6-1);
  entity_1[6-1]='0';
  entity_2[67] = 'L';
}