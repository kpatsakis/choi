void fun()
{
  int entity_3 = 58;
  entity_3 = 58;
  char entity_5[entity_3] = "";
  char* entity_1;
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'e', entity_3-1);
  entity_5[entity_3-1]='0';
  strcpy(entity_1, entity_5);
}