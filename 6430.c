void fun()
{
  char* entity_6;
  char entity_1[54] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 'U', 54-1);
  entity_1[54-1]='';
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  strcpy(entity_5, entity_1);
}