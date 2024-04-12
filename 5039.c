void fun()
{
  int entity_0 = 98;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  memset(entity_9, 'i', entity_0-1);
  entity_9[entity_0-1]='';
  strcpy(entity_4, entity_9);
}