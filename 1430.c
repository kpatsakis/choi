void fun()
{
  char entity_4[59] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 59-1);
  entity_4[59-1]='';
  entity_4[96] = 'i';
}