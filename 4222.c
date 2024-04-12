void fun()
{
  int entity_0 = 26;
  int entity_5 = 52;
  int entity_8 = 54;
  char* entity_1;
  char entity_2[22] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_2, 'R', 22-1);
  entity_2[22-1]='';
  strcpy(entity_1, entity_2);
}