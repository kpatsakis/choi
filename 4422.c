void fun()
{
  char entity_3[72] = "";
  entity_3 = NULL;
  memset(entity_3, 'g', 72-1);
  entity_3[72-1]='';
  entity_3[26] = 'x';
}