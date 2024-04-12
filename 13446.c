void fun()
{
  int entity_3 = 46;
  char entity_9[entity_3] = "";
  char* entity_2;
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'K', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_3 = 11;
  memcpy(entity_2, entity_9, entity_3*sizeof(char));
}