void fun()
{
  char entity_3[70] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', 70-1);
  entity_3[70-1]='';
  entity_3[80] = 'j';
}