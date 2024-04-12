void fun()
{
  int entity_1 = 42;
  char entity_0[62] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_0, 'D', 62-1);
  entity_0[62-1]='';
  strcpy(entity_8, entity_0);
}