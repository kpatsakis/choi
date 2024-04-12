void fun()
{
  int entity_2 = 99;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char entity_0[85] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_3, 'm', entity_2-1);
  entity_3[entity_2-1]='';
  memset(entity_0, 'N', 85-1);
  entity_0[85-1]='';
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[66-1]='';
  strcpy(entity_1, entity_3);
}