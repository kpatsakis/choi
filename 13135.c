void fun()
{
  int entity_2 = 44;
  entity_2 = 44;
  char entity_7 = 'F';
  char* entity_1;
  char entity_3 = 'g';
  char entity_9[entity_2] = "";
  entity_1 = (char*)malloc(90*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'a', entity_2-1);
  entity_9[entity_2-1]='0';
  strcpy(entity_1, entity_9);
}