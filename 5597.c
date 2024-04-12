void fun()
{
  int entity_8 = 76;
  entity_8 = 76;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_0;
  memset(entity_1, 'C', entity_8-1);
  entity_1[entity_8-1]='';
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[19-1]='';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  strcpy(entity_3, entity_1);
}