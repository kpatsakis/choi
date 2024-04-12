void fun()
{
  char entity_4[77] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'H', 77-1);
  entity_4[77-1]='';
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[12-1]='';
  strcpy(entity_1, entity_4);
}