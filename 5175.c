void fun()
{
  char entity_3[3] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'T', 3-1);
  entity_3[3-1]='';
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[58-1]='';
  strcpy(entity_8, entity_3);
}