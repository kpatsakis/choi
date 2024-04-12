void fun()
{
  int entity_4 = 23;
  char entity_8[85] = "";
  entity_8 = NULL;
  char entity_0[3] = "";
  entity_0 = NULL;
  char entity_2 = 'D';
  char* entity_1;
  memset(entity_0, 'n', 3-1);
  entity_0[3-1]='';
  memset(entity_8, 'U', 85-1);
  entity_8[85-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  strcpy(entity_1, entity_0);
}