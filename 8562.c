void fun()
{
  char entity_0 = 't';
  char entity_4[98] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 't', 98-1);
  entity_4[98-1]='';
  entity_1 = (char*)malloc(76*sizeof(char));
  entity_1[76-1]='';
  strcpy(entity_1, entity_4);
}