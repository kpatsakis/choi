void fun()
{
  char* entity_8;
  char entity_5[57] = "";
  entity_5 = NULL;
  memset(entity_5, 'G', 57-1);
  entity_5[57-1]='';
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[19-1]='';
  strcpy(entity_8, entity_5);
}