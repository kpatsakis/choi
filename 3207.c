void fun()
{
  int entity_8 = 77;
  int entity_2 = 90;
  char* entity_0;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char entity_1 = 'o';
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'P', 16-1);
  entity_9[16-1]='';
  memset(entity_4, 'i', entity_2-1);
  entity_4[entity_2-1]='';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  strcpy(entity_0, entity_4);
}