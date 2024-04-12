void fun()
{
  int entity_1 = 64;
  int entity_2 = 83;
  char* entity_9;
  char entity_0 = 'R';
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[26-1]='';
  memset(entity_4, 'u', entity_1-1);
  entity_4[entity_1-1]='';
  entity_1 = 56;
  strcpy(entity_9, entity_4);
}