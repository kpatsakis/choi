void fun()
{
  int entity_1 = 43;
  entity_1 = 43;
  char* entity_9;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memset(entity_6, 'r', entity_1-1);
  entity_6[entity_1-1]='';
  strcpy(entity_9, entity_6);
}