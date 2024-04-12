void fun()
{
  char entity_2[6] = "";
  entity_2 = NULL;
  memset(entity_2, 'v', 6-1);
  entity_2[6-1]='';
  entity_2[19] = 'u';
}