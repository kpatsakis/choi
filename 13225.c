void fun()
{
  int entity_9 = 53;
  char entity_6 = 'f';
  char entity_8 = 'r';
  char* entity_7;
  char* entity_2;
  char entity_0[entity_9] = "";
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'A', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_9 = 22;
  strcpy(entity_2, entity_0);
}