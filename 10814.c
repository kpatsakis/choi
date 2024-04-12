void fun()
{
  char entity_2[62] = "";
  char entity_1[60] = "";
  memset(entity_1, 'f', 60-1);
  entity_1[60-1]='0';
  memset(entity_2, 'u', 62-1);
  entity_2[62-1]='0';
  entity_2[19] = 's';
}