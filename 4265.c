void fun()
{
  int entity_1 = 7;
  char entity_8[32] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_0;
  memset(entity_8, 'H', 32-1);
  entity_8[32-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[6-1]='';
  entity_1 = 40;
  strcpy(entity_0, entity_8);
}