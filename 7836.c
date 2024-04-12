void fun()
{
  int entity_0 = 20;
  entity_0 = 73;
  char* entity_8;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_1;
  char* entity_7;
  memset(entity_5, 't', entity_0-1);
  entity_5[entity_0-1]='';
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[51-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  memcpy(entity_8, entity_5, entity_0*sizeof(char));
}