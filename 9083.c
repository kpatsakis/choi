void fun()
{
  char entity_1[18] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', 18-1);
  entity_1[18-1]='';
  entity_1[9] = 'X';
}