void fun()
{
  int entity_7 = 92;
  char* entity_4;
  char* entity_1;
  char entity_8[39] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memset(entity_8, 'B', 39-1);
  entity_8[39-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  strcpy(entity_4, entity_8);
}