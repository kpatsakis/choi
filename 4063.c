void fun()
{
  int entity_0 = 40;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'f', entity_0-1);
  entity_7[entity_0-1]='';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  entity_0 = 39;
  strcpy(entity_5, entity_7);
}