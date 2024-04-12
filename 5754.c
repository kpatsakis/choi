void fun()
{
  int entity_1 = 16;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'r', entity_1-1);
  entity_8[entity_1-1]='';
  entity_0 = (char*)malloc(71*sizeof(char));
  entity_0[71-1]='';
  strcpy(entity_0, entity_8);
}