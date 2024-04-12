void fun()
{
  int entity_2 = 16;
  entity_2 = 67;
  char* entity_9;
  char entity_0[entity_2] = "";
  memset(entity_0, 'b', entity_2-1);
  entity_0[entity_2-1]='0';
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, entity_2*sizeof(char));
}