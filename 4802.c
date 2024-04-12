void fun()
{
  char entity_7 = 'x';
  char entity_8[61] = "";
  entity_8 = NULL;
  memset(entity_8, 'O', 61-1);
  entity_8[61-1]='';
  entity_8[91] = 'k';
}