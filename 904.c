void fun()
{
  char entity_7[7] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[19-1]='';
  memset(entity_7, 'R', 7-1);
  entity_7[7-1]='';
  strcpy(entity_4, entity_7);
}