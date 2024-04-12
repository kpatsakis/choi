void fun()
{
  int entity_1 = 50;
  char* entity_9;
  char entity_6[entity_1] = "";
  char entity_3 = 'I';
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'u', entity_1-1);
  entity_6[entity_1-1]='0';
  strcpy(entity_9, entity_6);
}