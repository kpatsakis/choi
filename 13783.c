void fun()
{
  int entity_2 = 61;
  char* entity_6;
  char entity_1[entity_2] = "";
  memset(entity_1, 'J', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[0]='0';
  entity_2 = 58;
  strcpy(entity_6, entity_1);
}