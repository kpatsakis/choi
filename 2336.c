void fun()
{
  int entity_6 = 69;
  int entity_3 = 69;
  entity_3 = 81;
  char* entity_4;
  char* entity_0;
  char entity_2[76] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'R', 76-1);
  entity_2[76-1]='';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[75-1]='';
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  strcpy(entity_4, entity_2);
}