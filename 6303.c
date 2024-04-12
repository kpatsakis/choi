void fun()
{
  char* entity_4;
  char entity_7[78] = "";
  entity_7 = NULL;
  char entity_5[11] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  memset(entity_7, 'K', 78-1);
  entity_7[78-1]='';
  memset(entity_5, 'K', 11-1);
  entity_5[11-1]='';
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[12-1]='';
  strcpy(entity_8, entity_5);
}