void fun()
{
  int entity_7 = 23;
  char* entity_3;
  char entity_9[entity_7] = "";
  char entity_6 = 'Z';
  memset(entity_9, 'f', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, entity_7*sizeof(char));
}