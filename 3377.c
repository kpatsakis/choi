void fun()
{
  int entity_6 = 65;
  int entity_1 = 92;
  entity_6 = 65;
  char* entity_4;
  char* entity_3;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[58-1]='';
  memset(entity_0, 'c', entity_6-1);
  entity_0[entity_6-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  strcpy(entity_3, entity_0);
}