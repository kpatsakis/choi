void fun()
{
  int entity_7 = 49;
  int entity_2 = 63;
  int entity_3 = 29;
  char entity_8 = 's';
  char* entity_9;
  char entity_4[entity_3] = "";
  memset(entity_4, 'I', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_4);
}