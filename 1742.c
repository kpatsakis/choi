void fun()
{
  int entity_1 = 64;
  entity_1 = 64;
  char entity_8 = 'x';
  char* entity_3;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_0[87] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  memset(entity_6, 'u', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_0, 'T', 87-1);
  entity_0[87-1]='';
  strcpy(entity_3, entity_6);
}