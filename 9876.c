void fun()
{
  char entity_5[68] = "";
  entity_5 = NULL;
  memset(entity_5, 'Q', 68-1);
  entity_5[68-1]='';
  entity_5[84] = 'Z';
}