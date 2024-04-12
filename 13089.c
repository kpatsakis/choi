void fun()
{
  int entity_4 = 92;
  entity_4 = 92;
  char* entity_9;
  char entity_3[entity_4] = "";
  memset(entity_3, 's', entity_4-1);
  entity_3[entity_4-1]='0';
  entity_9 = (char*)malloc(27*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_3);
}