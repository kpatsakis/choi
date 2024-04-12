void fun()
{
  char entity_4[72] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', 72-1);
  entity_4[72-1]='';
  entity_4[55] = 'f';
}