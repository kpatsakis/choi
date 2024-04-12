void fun()
{
  int entity_1 = 48;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'F', entity_1-1);
  entity_0[entity_1-1]='';
  entity_9 = (char*)malloc(87*sizeof(char));
  entity_9[87-1]='';
  memcpy(entity_9, entity_0, entity_1*sizeof(char));
}