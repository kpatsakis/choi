void fun()
{
  char* entity_0;
  char entity_2[14] = "";
  entity_2 = NULL;
  char entity_5[74] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_2, 'I', 14-1);
  entity_2[14-1]='';
  memset(entity_5, 'D', 74-1);
  entity_5[74-1]='';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  strcpy(entity_0, entity_2);
}