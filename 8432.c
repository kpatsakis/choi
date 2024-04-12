void fun()
{
  char entity_1[31] = "";
  entity_1 = NULL;
  memset(entity_1, 'p', 31-1);
  entity_1[31-1]='';
  entity_1[29] = 'u';
}