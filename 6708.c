void fun()
{
  int entity_8 = 73;
  entity_8 = 55;
  char* entity_0;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_3;
  entity_3 = (char*)malloc(56*sizeof(char));
  entity_3[56-1]='';
  memset(entity_4, 'k', entity_8-1);
  entity_4[entity_8-1]='';
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[96-1]='';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[96-1]='';
  memcpy(entity_0, entity_4, entity_8*sizeof(char));
}