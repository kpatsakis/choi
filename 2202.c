void fun()
{
  char entity_3[61] = "";
  entity_3 = NULL;
  char entity_7[28] = "";
  entity_7 = NULL;
  memset(entity_7, 'A', 28-1);
  entity_7[28-1]='';
  memset(entity_3, 'W', 61-1);
  entity_3[61-1]='';
  entity_3[53] = 's';
}