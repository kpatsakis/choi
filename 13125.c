void fun()
{
  int entity_6 = 56;
  char entity_1[entity_6] = "";
  char* entity_7;
  char entity_9 = 'f';
  entity_7 = (char*)malloc(80*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'B', entity_6-1);
  entity_1[entity_6-1]='0';
  entity_6 = 28;
  strcpy(entity_7, entity_1);
}