void fun()
{
  int entity_4 = 37;
  entity_4 = 37;
  char* entity_1;
  char entity_7[entity_4] = "";
  memset(entity_7, 'e', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_7);
}