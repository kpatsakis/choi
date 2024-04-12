void fun()
{
  int entity_9 = 25;
  char* entity_4;
  char entity_6[16] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_6, 'q', 16-1);
  entity_6[16-1]='';
  strcpy(entity_4, entity_6);
}