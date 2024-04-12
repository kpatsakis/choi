void fun()
{
  int entity_2 = 29;
  char entity_9[entity_2] = "";
  char* entity_6;
  memset(entity_9, 's', entity_2-1);
  entity_9[entity_2-1]='0';
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_9);
}