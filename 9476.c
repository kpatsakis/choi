void fun()
{
  char entity_2[85] = "";
  entity_2 = NULL;
  memset(entity_2, 'u', 85-1);
  entity_2[85-1]='';
  entity_2[52] = 'n';
}