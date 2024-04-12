void fun()
{
  int entity_0 = 28;
  char entity_3 = 'd';
  char* entity_7;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', entity_0-1);
  entity_1[entity_0-1]='';
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[36-1]='';
  strcpy(entity_7, entity_1);
}