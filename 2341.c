void fun()
{
  int entity_8 = 60;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_0 = 'u';
  memset(entity_7, 'p', entity_8-1);
  entity_7[entity_8-1]='';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  entity_8 = 34;
  strcpy(entity_5, entity_7);
}