void fun()
{
  int entity_9 = 70;
  char* entity_3;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'F', entity_9-1);
  entity_0[entity_9-1]='';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[11-1]='';
  memcpy(entity_3, entity_0, entity_9*sizeof(char));
}