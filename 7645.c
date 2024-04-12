void fun()
{
  char entity_2[24] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', 24-1);
  entity_2[24-1]='';
  entity_2[16] = 'j';
}