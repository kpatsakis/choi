void fun()
{
  char* entity_5;
  char entity_4[87] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  memset(entity_4, 'Y', 87-1);
  entity_4[87-1]='';
  strcpy(entity_5, entity_4);
}