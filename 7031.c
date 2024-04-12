void fun()
{
  char entity_2[20] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', 20-1);
  entity_2[20-1]='';
  entity_2[44] = 'f';
}