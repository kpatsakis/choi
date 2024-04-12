void fun()
{
  char entity_7[55] = "";
  entity_7 = NULL;
  memset(entity_7, 'y', 55-1);
  entity_7[55-1]='';
  entity_7[32] = 'X';
}