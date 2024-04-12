void fun()
{
  int entity_8 = 19;
  entity_8 = 27;
  char entity_0[87] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_4 = 'D';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_0, 'R', 87-1);
  entity_0[87-1]='';
  strcpy(entity_1, entity_0);
}