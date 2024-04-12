void fun()
{
  char* entity_4;
  char* entity_5;
  char entity_3[97] = "";
  entity_3 = NULL;
  memset(entity_3, 'E', 97-1);
  entity_3[97-1]='';
  entity_5 = (char*)malloc(35*sizeof(char));
  entity_5[35-1]='';
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[17-1]='';
  strcpy(entity_5, entity_3);
}