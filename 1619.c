void fun()
{
  char entity_8[35] = "";
  entity_8 = NULL;
  char entity_6 = 'x';
  memset(entity_8, 'g', 35-1);
  entity_8[35-1]='';
  entity_8[93] = 'S';
}