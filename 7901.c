void fun()
{
  int entity_1 = 4;
  char* entity_8;
  char entity_0[36] = "";
  entity_0 = NULL;
  memset(entity_0, 'z', 36-1);
  entity_0[36-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  strcpy(entity_8, entity_0);
}