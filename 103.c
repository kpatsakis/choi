void fun()
{
  int entity_9 = 22;
  int entity_7 = 87;
  char entity_1 = 'G';
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  memset(entity_8, 'F', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_4, entity_8);
}