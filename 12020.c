void fun()
{
  int entity_9 = 13;
  char entity_0[entity_9] = "";
  char* entity_3;
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'i', entity_9-1);
  entity_0[entity_9-1]='0';
  memcpy(entity_3, entity_0, entity_9*sizeof(char));
}