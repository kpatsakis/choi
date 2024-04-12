void fun()
{
  char entity_3[89] = "";
  entity_3 = NULL;
  memset(entity_3, 'k', 89-1);
  entity_3[89-1]='';
  entity_3[62] = 'Z';
}