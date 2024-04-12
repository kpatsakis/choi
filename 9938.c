void fun()
{
  char entity_4[94] = "";
  entity_4 = NULL;
  memset(entity_4, 'c', 94-1);
  entity_4[94-1]='';
  entity_4[7] = 'o';
}