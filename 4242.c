void fun()
{
  char entity_2[47] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', 47-1);
  entity_2[47-1]='';
  entity_2[22] = 'j';
}