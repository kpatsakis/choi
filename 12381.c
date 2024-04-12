void fun()
{
  int entity_1 = 38;
  int entity_8 = 19;
  char* entity_9;
  char entity_2[14] = "";
  char entity_3[entity_8] = "";
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'b', 14-1);
  entity_2[14-1]='0';
  memset(entity_3, 'F', entity_8-1);
  entity_3[entity_8-1]='0';
  strcpy(entity_9, entity_3);
}