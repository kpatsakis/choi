void fun()
{
  int entity_9 = 9;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_6 = 'S';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_2, 'U', entity_9-1);
  entity_2[entity_9-1]='';
  entity_9 = 8;
  memcpy(entity_7, entity_2, entity_9*sizeof(char));
}