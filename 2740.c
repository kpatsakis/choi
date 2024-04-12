void fun()
{
  int entity_9 = 27;
  entity_9 = 27;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'e', entity_9-1);
  entity_0[entity_9-1]='';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  strcpy(entity_7, entity_0);
}