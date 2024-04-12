void fun()
{
  int entity_1 = 21;
  int entity_5 = 44;
  int entity_6 = 94;
  char* entity_4;
  char entity_9[entity_5] = "";
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'N', entity_5-1);
  entity_9[entity_5-1]='0';
  strcpy(entity_4, entity_9);
}