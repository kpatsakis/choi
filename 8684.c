void fun()
{
  char entity_8[89] = "";
  entity_8 = NULL;
  char entity_2[11] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_8, 't', 89-1);
  entity_8[89-1]='';
  memset(entity_2, 'H', 11-1);
  entity_2[11-1]='';
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  strcpy(entity_4, entity_2);
}