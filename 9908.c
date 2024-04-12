void fun()
{
  int entity_1 = 1;
  char* entity_2;
  char entity_6[14] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_8[30] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[63-1]='';
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[29-1]='';
  memset(entity_6, 'Z', 14-1);
  entity_6[14-1]='';
  memset(entity_8, 'E', 30-1);
  entity_8[30-1]='';
  strcpy(entity_2, entity_8);
}