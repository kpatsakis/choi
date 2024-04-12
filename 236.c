void fun()
{
  char entity_2[87] = "";
  entity_2 = NULL;
  char entity_5 = 'o';
  memset(entity_2, 'd', 87-1);
  entity_2[87-1]='';
  entity_2[89] = 'P';
}