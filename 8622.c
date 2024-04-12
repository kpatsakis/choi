void fun()
{
  int entity_0 = 94;
  int entity_1 = 74;
  char* entity_5;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[70-1]='';
  memset(entity_7, 'F', entity_0-1);
  entity_7[entity_0-1]='';
  strcpy(entity_5, entity_7);
}