void fun()
{
  int entity_5 = 85;
  int entity_9 = 61;
  char* entity_0;
  char entity_2[entity_9] = "";
  memset(entity_2, 's', entity_9-1);
  entity_2[entity_9-1]='0';
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_2);
}