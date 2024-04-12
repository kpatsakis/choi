void fun()
{
  int entity_6 = 13;
  char entity_0 = 's';
  char entity_8[34] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_2[85] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_8, 'v', 34-1);
  entity_8[34-1]='';
  memset(entity_2, 'K', 85-1);
  entity_2[85-1]='';
  strcpy(entity_3, entity_8);
}