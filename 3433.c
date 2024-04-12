void fun()
{
  int entity_0 = 54;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_9;
  char entity_4[69] = "";
  entity_4 = NULL;
  memset(entity_7, 'S', entity_0-1);
  entity_7[entity_0-1]='';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memset(entity_4, 'B', 69-1);
  entity_4[69-1]='';
  strcpy(entity_9, entity_7);
}