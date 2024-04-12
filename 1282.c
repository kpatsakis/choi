void fun()
{
  char entity_8[13] = "";
  entity_8 = NULL;
  char entity_3 = 'F';
  memset(entity_8, 'z', 13-1);
  entity_8[13-1]='';
  entity_8[25] = 'J';
}