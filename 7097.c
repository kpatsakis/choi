void fun()
{
  int entity_0 = 22;
  int entity_2 = 98;
  char* entity_4;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memset(entity_8, 'v', entity_0-1);
  entity_8[entity_0-1]='';
  entity_0 = 56;
  strcpy(entity_4, entity_8);
}