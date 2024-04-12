void fun()
{
  int entity_5 = 92;
  char* entity_0;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  memset(entity_7, 'f', entity_5-1);
  entity_7[entity_5-1]='';
  strcpy(entity_0, entity_7);
}