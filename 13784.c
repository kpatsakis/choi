void fun()
{
  int entity_2 = 73;
  char entity_1[entity_2] = "";
  char* entity_5;
  char entity_9 = 'T';
  entity_5 = (char*)malloc(82*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'r', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_2 = 54;
  strcpy(entity_5, entity_1);
}