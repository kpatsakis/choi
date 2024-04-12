void fun()
{
  int entity_4 = 12;
  char* entity_7;
  char entity_9[entity_4] = "";
  char entity_0 = 'Z';
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'k', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_4 = 5;
  memcpy(entity_7, entity_9, entity_4*sizeof(char));
}