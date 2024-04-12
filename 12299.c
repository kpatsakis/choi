void fun()
{
  int entity_4 = 43;
  int entity_9 = 16;
  int entity_6 = 72;
  char* entity_1;
  char entity_8[entity_9] = "";
  memset(entity_8, 'z', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}