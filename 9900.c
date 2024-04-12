void fun()
{
  int entity_0 = 13;
  char* entity_3;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'C', entity_0-1);
  entity_9[entity_0-1]='';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  entity_9[30] = 'V';
}