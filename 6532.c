void fun()
{
  char entity_4[68] = "";
  entity_4 = NULL;
  memset(entity_4, 's', 68-1);
  entity_4[68-1]='';
  entity_4[42] = 'p';
}