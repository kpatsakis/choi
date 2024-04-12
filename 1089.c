void fun()
{
  char entity_5[29] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'H', 29-1);
  entity_5[29-1]='';
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[24-1]='';
  strcpy(entity_2, entity_5);
}