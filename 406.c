void fun()
{
  int entity_3 = 0;
  int entity_9 = 52;
  int entity_6 = 66;
  char* entity_0;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', entity_6-1);
  entity_7[entity_6-1]='';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  strcpy(entity_0, entity_7);
}