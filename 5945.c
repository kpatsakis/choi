void fun()
{
  char* entity_5;
  char entity_8[16] = "";
  entity_8 = NULL;
  char entity_2 = 't';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  memset(entity_8, 'k', 16-1);
  entity_8[16-1]='';
  strcpy(entity_5, entity_8);
}