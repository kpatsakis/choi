void fun()
{
  int entity_2 = 15;
  int entity_0 = 46;
  char entity_7[48] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'g', 48-1);
  entity_7[48-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_7);
}