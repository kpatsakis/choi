void fun()
{
  char entity_4[51] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', 51-1);
  entity_4[51-1]='';
  entity_4[12] = 'z';
}