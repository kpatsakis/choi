void fun()
{
  int entity_7 = 40;
  int entity_8 = 36;
  char* entity_6;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_3;
  entity_6 = (char*)malloc(55*sizeof(char));
  entity_6[55-1]='';
  memset(entity_5, 'F', entity_8-1);
  entity_5[entity_8-1]='';
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  entity_8 = 11;
  strcpy(entity_6, entity_5);
}