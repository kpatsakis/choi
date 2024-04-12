void fun()
{
  int entity_2 = 33;
  char entity_3[11] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_4;
  char* entity_8;
  char entity_5[76] = "";
  entity_5 = NULL;
  memset(entity_5, 'm', 76-1);
  entity_5[76-1]='';
  memset(entity_3, 'u', 11-1);
  entity_3[11-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[19-1]='';
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  strcpy(entity_4, entity_5);
}