void fun()
{
  char entity_2 = 'c';
  char entity_4[38] = "";
  entity_4 = NULL;
  memset(entity_4, 'r', 38-1);
  entity_4[38-1]='';
  entity_4[96] = 'U';
}