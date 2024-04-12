void fun()
{
  char entity_4[23] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', 23-1);
  entity_4[23-1]='';
  entity_4[65] = 'e';
}