void fun()
{
  int entity_5 = 37;
  char* entity_8;
  char entity_7[98] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_0[64] = "";
  entity_0 = NULL;
  memset(entity_7, 'p', 98-1);
  entity_7[98-1]='';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  entity_8 = (char*)malloc(100*sizeof(char));
  entity_8[100-1]='';
  memset(entity_0, 'R', 64-1);
  entity_0[64-1]='';
  strcpy(entity_8, entity_7);
}