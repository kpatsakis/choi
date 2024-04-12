void fun()
{
  int entity_3 = 61;
  char* entity_2;
  char entity_1[50] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_8[88] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_8, 'j', 88-1);
  entity_8[88-1]='';
  memset(entity_1, 'Q', 50-1);
  entity_1[50-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  strcpy(entity_2, entity_8);
}