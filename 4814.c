void fun()
{
  char* entity_8;
  char entity_3[88] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_0[55] = "";
  entity_0 = NULL;
  memset(entity_3, 'p', 88-1);
  entity_3[88-1]='';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[5-1]='';
  memset(entity_0, 'G', 55-1);
  entity_0[55-1]='';
  strcpy(entity_1, entity_0);
}