void fun()
{
  int entity_2 = 35;
  int entity_4 = 39;
  char* entity_6;
  char entity_0[54] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_5;
  memset(entity_0, 'd', 54-1);
  entity_0[54-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  entity_1 = (char*)malloc(76*sizeof(char));
  entity_1[76-1]='';
  entity_4 = 27;
  memcpy(entity_5, entity_0, 54*sizeof(char));
}