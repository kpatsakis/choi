void fun()
{
  int entity_9 = 25;
  int entity_8 = 42;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_0[72] = "";
  entity_0 = NULL;
  memset(entity_2, 'T', entity_8-1);
  entity_2[entity_8-1]='';
  memset(entity_0, 'F', 72-1);
  entity_0[72-1]='';
  entity_7 = (char*)malloc(30*sizeof(char));
  entity_7[30-1]='';
  strcpy(entity_7, entity_2);
}