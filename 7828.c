void fun()
{
  char entity_7[89] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_7, 'w', 89-1);
  entity_7[89-1]='';
  strcpy(entity_4, entity_7);
}