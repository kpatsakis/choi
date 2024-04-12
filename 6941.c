void fun()
{
  char entity_4[78] = "";
  entity_4 = NULL;
  memset(entity_4, 'U', 78-1);
  entity_4[78-1]='';
  entity_4[38] = 'i';
}