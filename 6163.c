void fun()
{
  int entity_0 = 17;
  int entity_6 = 77;
  int entity_7 = 2;
  entity_0 = 17;
  char* entity_1;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', entity_0-1);
  entity_8[entity_0-1]='';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  strcpy(entity_1, entity_8);
}