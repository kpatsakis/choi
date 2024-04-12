void fun()
{
  char* entity_8;
  char entity_1[40] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_5[31] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  memset(entity_5, 'S', 31-1);
  entity_5[31-1]='';
  memset(entity_1, 'm', 40-1);
  entity_1[40-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  memcpy(entity_8, entity_5, 31*sizeof(char));
}