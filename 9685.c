void fun()
{
  char entity_5[69] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_8[76] = "";
  entity_8 = NULL;
  memset(entity_8, 'h', 76-1);
  entity_8[76-1]='';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[71-1]='';
  memset(entity_5, 'e', 69-1);
  entity_5[69-1]='';
  strcpy(entity_4, entity_5);
}