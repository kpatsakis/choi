void fun()
{
  char entity_7[53] = "";
  entity_7 = NULL;
  char entity_4[61] = "";
  entity_4 = NULL;
  memset(entity_7, 'y', 53-1);
  entity_7[53-1]='';
  memset(entity_4, 'p', 61-1);
  entity_4[61-1]='';
  entity_4[16] = 'z';
}