void fun()
{
  int entity_6 = 93;
  char* entity_9;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'i', entity_6-1);
  entity_2[entity_6-1]='';
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[82-1]='';
  entity_6 = 38;
  memcpy(entity_9, entity_2, entity_6*sizeof(char));
}