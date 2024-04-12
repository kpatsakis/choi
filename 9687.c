void fun()
{
  char entity_6[51] = "";
  entity_6 = NULL;
  char* entity_1;
  char* entity_8;
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[19-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  memset(entity_6, 'x', 51-1);
  entity_6[51-1]='';
  strcpy(entity_1, entity_6);
}