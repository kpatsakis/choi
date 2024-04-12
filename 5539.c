void fun()
{
  char entity_3[26] = "";
  entity_3 = NULL;
  memset(entity_3, 'R', 26-1);
  entity_3[26-1]='';
  entity_3[80] = 'k';
}