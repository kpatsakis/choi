void fun()
{
  int entity_1 = 52;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'F', entity_1-1);
  entity_0[entity_1-1]='';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  strcpy(entity_7, entity_0);
}