void fun()
{
  char entity_3 = 'h';
  char entity_7[77] = "";
  entity_7 = NULL;
  memset(entity_7, 'r', 77-1);
  entity_7[77-1]='';
  entity_7[27] = 'k';
}