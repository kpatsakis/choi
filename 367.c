void fun()
{
  char entity_2[84] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', 84-1);
  entity_2[84-1]='';
  entity_2[78] = 'S';
}