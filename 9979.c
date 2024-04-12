void fun()
{
  int entity_2 = 97;
  int entity_5 = 0;
  entity_2 = 97;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char entity_9[23] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'A', 23-1);
  entity_9[23-1]='';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[16-1]='';
  memset(entity_1, 'O', entity_2-1);
  entity_1[entity_2-1]='';
  strcpy(entity_0, entity_1);
}