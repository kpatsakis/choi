void fun()
{
  int entity_9 = 15;
  char entity_3[entity_9] = "";
  char* entity_2;
  memset(entity_3, 'O', entity_9-1);
  entity_3[entity_9-1]='0';
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[0]='0';
  entity_9 = 79;
  strcpy(entity_2, entity_3);
}