void fun()
{
  int entity_6 = 27;
  int entity_7 = 13;
  int entity_1 = 55;
  char* entity_3;
  char entity_9[entity_7] = "";
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'i', entity_7-1);
  entity_9[entity_7-1]='0';
  strcpy(entity_3, entity_9);
}