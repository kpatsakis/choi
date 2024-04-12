void fun()
{
  int entity_7 = 53;
  char entity_9[entity_7] = "";
  char entity_6 = 'e';
  char* entity_1;
  memset(entity_9, 'p', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[0]='0';
  entity_7 = 11;
  memcpy(entity_1, entity_9, entity_7*sizeof(char));
}