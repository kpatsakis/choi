void fun()
{
  int entity_6 = 77;
  int entity_7 = 89;
  entity_6 = 5;
  char entity_3 = 'i';
  char* entity_0;
  char entity_1[55] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_1, 'R', 55-1);
  entity_1[55-1]='';
  strcpy(entity_0, entity_1);
}