void fun()
{
  char entity_3[55] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', 55-1);
  entity_3[55-1]='';
  entity_3[64] = 'o';
}