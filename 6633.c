void fun()
{
  int entity_3 = 34;
  entity_3 = 69;
  char entity_5[89] = "";
  entity_5 = NULL;
  char entity_6 = 'e';
  memset(entity_5, 'I', 89-1);
  entity_5[89-1]='';
  entity_5[entity_3] = 'q';
}