void fun()
{
  int entity_5 = 30;
  int entity_4 = 42;
  entity_4 = 86;
  char entity_0[78] = "";
  entity_0 = NULL;
  char* entity_8;
  char* entity_1;
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[23-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_0, 'O', 78-1);
  entity_0[78-1]='';
  strcpy(entity_8, entity_0);
}