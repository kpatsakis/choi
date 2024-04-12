void fun()
{
  int entity_3 = 93;
  char* entity_7;
  char entity_9 = 'M';
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[78-1]='';
  memset(entity_0, 'q', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 94;
  strcpy(entity_7, entity_0);
}