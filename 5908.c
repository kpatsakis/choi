void fun()
{
  int entity_4 = 53;
  char* entity_1;
  char entity_3[14] = "";
  entity_3 = NULL;
  char entity_0[16] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'N', 16-1);
  entity_0[16-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  entity_2 = (char*)malloc(55*sizeof(char));
  entity_2[55-1]='';
  memset(entity_3, 'n', 14-1);
  entity_3[14-1]='';
  strcpy(entity_1, entity_3);
}