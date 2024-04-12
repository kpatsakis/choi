void fun()
{
  int entity_0 = 10;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'P', entity_0-1);
  entity_1[entity_0-1]='';
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[67-1]='';
  strcpy(entity_7, entity_1);
}