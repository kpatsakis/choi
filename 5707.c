void fun()
{
  char entity_7[32] = "";
  entity_7 = NULL;
  memset(entity_7, 'L', 32-1);
  entity_7[32-1]='';
  entity_7[7] = 's';
}