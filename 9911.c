void fun()
{
  int entity_8 = 61;
  int entity_7 = 13;
  char entity_3[59] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_3, 'd', 59-1);
  entity_3[59-1]='';
  memset(entity_2, 'z', entity_7-1);
  entity_2[entity_7-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  entity_7 = 66;
  strcpy(entity_4, entity_2);
}