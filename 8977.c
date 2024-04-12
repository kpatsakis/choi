void fun()
{
  char entity_3[12] = "";
  entity_3 = NULL;
  memset(entity_3, 'W', 12-1);
  entity_3[12-1]='';
  entity_3[64] = 'K';
}