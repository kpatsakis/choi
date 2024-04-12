void fun()
{
  int entity_7 = 4;
  int entity_5 = 16;
  int entity_1 = 20;
  char entity_0[71] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'a', 71-1);
  entity_0[71-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  entity_1 = 8;
  strcpy(entity_8, entity_0);
}