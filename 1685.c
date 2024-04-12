void fun()
{
  char* entity_3;
  char entity_4[4] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[11-1]='';
  memset(entity_4, 'H', 4-1);
  entity_4[4-1]='';
  strcpy(entity_3, entity_4);
}