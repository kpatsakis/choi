void fun()
{
  int entity_5 = 57;
  char* entity_9;
  char entity_1[entity_5] = "";
  memset(entity_1, 'o', entity_5-1);
  entity_1[entity_5-1]='0';
  entity_9 = (char*)malloc(30*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_1);
}