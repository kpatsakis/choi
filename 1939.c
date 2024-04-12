void fun()
{
  char entity_2[37] = "";
  entity_2 = NULL;
  memset(entity_2, 'o', 37-1);
  entity_2[37-1]='';
  entity_2[55] = 'A';
}