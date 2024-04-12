void fun()
{
  int entity_9 = 54;
  char* entity_5;
  char entity_7[21] = "";
  entity_7 = NULL;
  char entity_0[11] = "";
  entity_0 = NULL;
  memset(entity_7, 'O', 21-1);
  entity_7[21-1]='';
  memset(entity_0, 'd', 11-1);
  entity_0[11-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  strcpy(entity_5, entity_7);
}