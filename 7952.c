void fun()
{
  int entity_7 = 70;
  int entity_2 = 80;
  char* entity_8;
  char entity_5[12] = "";
  entity_5 = NULL;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_5, 'E', 12-1);
  entity_5[12-1]='';
  memset(entity_0, 'M', entity_2-1);
  entity_0[entity_2-1]='';
  entity_8 = (char*)malloc(4*sizeof(char));
  entity_8[4-1]='';
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[29-1]='';
  strcpy(entity_3, entity_0);
}