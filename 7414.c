void fun()
{
  char entity_7[43] = "";
  entity_7 = NULL;
  char entity_2[88] = "";
  entity_2 = NULL;
  memset(entity_7, 'Y', 43-1);
  entity_7[43-1]='';
  memset(entity_2, 'U', 88-1);
  entity_2[88-1]='';
  entity_7[55] = 'w';
}