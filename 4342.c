void fun()
{
  int entity_4 = 81;
  int entity_0 = 68;
  int entity_8 = 75;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memset(entity_1, 'T', entity_8-1);
  entity_1[entity_8-1]='';
  strcpy(entity_2, entity_1);
}