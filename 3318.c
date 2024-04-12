void fun()
{
  char* entity_2;
  char entity_1[40] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[87-1]='';
  memset(entity_1, 'X', 40-1);
  entity_1[40-1]='';
  strcpy(entity_2, entity_1);
}