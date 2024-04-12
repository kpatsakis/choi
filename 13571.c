void fun()
{
  int entity_9 = 87;
  int entity_7 = 40;
  entity_7 = 40;
  char* entity_5;
  char entity_1[entity_7] = "";
  memset(entity_1, 'r', entity_7-1);
  entity_1[entity_7-1]='0';
  entity_5 = (char*)malloc(36*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_1);
}