void fun()
{
  int entity_9 = 67;
  char* entity_4;
  char entity_2[entity_9] = "";
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'F', entity_9-1);
  entity_2[entity_9-1]='0';
  memcpy(entity_4, entity_2, entity_9*sizeof(char));
}