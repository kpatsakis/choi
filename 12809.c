void fun()
{
  int entity_9 = 70;
  char entity_3 = 'M';
  char* entity_1;
  char entity_6[entity_9] = "";
  memset(entity_6, 'M', entity_9-1);
  entity_6[entity_9-1]='0';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}