void fun()
{
  char entity_2[68] = "";
  entity_2 = NULL;
  memset(entity_2, 'H', 68-1);
  entity_2[68-1]='';
  entity_2[81] = 'q';
}