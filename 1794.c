void fun()
{
  int entity_0 = 57;
  char entity_6[75] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_4 = 'p';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_6, 'A', 75-1);
  entity_6[75-1]='';
  memcpy(entity_9, entity_6, 75*sizeof(char));
}