void fun()
{
  int entity_3 = 1;
  char* entity_7;
  char entity_1[entity_3] = "";
  memset(entity_1, 'J', entity_3-1);
  entity_1[entity_3-1]='0';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[0]='0';
  entity_3 = 22;
  strcpy(entity_7, entity_1);
}