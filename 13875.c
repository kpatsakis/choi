void fun()
{
  int entity_6 = 3;
  entity_6 = 3;
  char entity_9[entity_6] = "";
  char* entity_8;
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'T', entity_6-1);
  entity_9[entity_6-1]='0';
  strcpy(entity_8, entity_9);
}