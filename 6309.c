void fun()
{
  char entity_3[41] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', 41-1);
  entity_3[41-1]='';
  entity_3[56] = 'C';
}