void fun()
{
  char* entity_3;
  char* entity_7;
  char* entity_1;
  char entity_4[40] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[29-1]='';
  memset(entity_4, 'M', 40-1);
  entity_4[40-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  entity_1 = (char*)malloc(90*sizeof(char));
  entity_1[90-1]='';
  strcpy(entity_7, entity_4);
}