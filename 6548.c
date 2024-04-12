void fun()
{
  int entity_8 = 55;
  char* entity_0;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'Q', entity_8-1);
  entity_3[entity_8-1]='';
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  entity_8 = 60;
  strcpy(entity_4, entity_3);
}