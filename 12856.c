void fun()
{
  int entity_9 = 92;
  char* entity_0;
  char entity_7 = 'n';
  char entity_2[entity_9] = "";
  char entity_5[22] = "";
  memset(entity_5, 'r', 22-1);
  entity_5[22-1]='0';
  memset(entity_2, 't', entity_9-1);
  entity_2[entity_9-1]='0';
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_2);
}