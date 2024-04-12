void fun()
{
  int entity_9 = 44;
  char* entity_2;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  memset(entity_7, 'A', entity_9-1);
  entity_7[entity_9-1]='';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  entity_9 = 78;
  memcpy(entity_2, entity_7, entity_9*sizeof(char));
}