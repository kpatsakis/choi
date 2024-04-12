void fun()
{
  int entity_8 = 92;
  char* entity_9;
  char entity_6[entity_8] = "";
  entity_9 = (char*)malloc(34*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'w', entity_8-1);
  entity_6[entity_8-1]='0';
  memcpy(entity_9, entity_6, entity_8*sizeof(char));
}