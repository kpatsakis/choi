void fun()
{
  int entity_0 = 31;
  entity_0 = 40;
  char* entity_5;
  char* entity_8;
  char* entity_6;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(0*sizeof(char));
  entity_5[0-1]='';
  memset(entity_3, 'm', entity_0-1);
  entity_3[entity_0-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  memcpy(entity_8, entity_3, entity_0*sizeof(char));
}