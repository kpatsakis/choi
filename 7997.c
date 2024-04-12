void fun()
{
  char entity_2[35] = "";
  entity_2 = NULL;
  char entity_4 = 'g';
  memset(entity_2, 'g', 35-1);
  entity_2[35-1]='';
  entity_2[64] = 'K';
}