void fun()
{
  char entity_6[47] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  memset(entity_6, 'N', 47-1);
  entity_6[47-1]='';
  strcpy(entity_4, entity_6);
}