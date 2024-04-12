void fun()
{
  int entity_6 = 21;
  int entity_8 = 8;
  int entity_5 = 88;
  entity_6 = 21;
  char* entity_1;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_0, 'C', entity_6-1);
  entity_0[entity_6-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  strcpy(entity_1, entity_0);
}