void fun()
{
  char entity_2 = 'j';
  char entity_4[40] = "";
  entity_4 = NULL;
  memset(entity_4, 'Z', 40-1);
  entity_4[40-1]='';
  entity_4[75] = 'y';
}