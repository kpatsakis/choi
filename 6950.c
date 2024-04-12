void fun()
{
  char entity_8 = 'x';
  char entity_3[1] = "";
  entity_3 = NULL;
  memset(entity_3, 'k', 1-1);
  entity_3[1-1]='';
  entity_3[58] = 'U';
}