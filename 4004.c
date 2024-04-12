void fun()
{
  char entity_2[72] = "";
  entity_2 = NULL;
  memset(entity_2, 'r', 72-1);
  entity_2[72-1]='';
  entity_2[80] = 'H';
}