void fun()
{
  int entity_6 = 49;
  int entity_4 = 40;
  int entity_1 = 26;
  char entity_0 = 'r';
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  memset(entity_8, 'U', entity_1-1);
  entity_8[entity_1-1]='';
  strcpy(entity_2, entity_8);
}