void fun()
{
  int entity_0 = 49;
  char* entity_5;
  char entity_9[65] = "";
  char entity_7[entity_0] = "";
  char entity_2[78] = "";
  memset(entity_7, 'G', entity_0-1);
  entity_7[entity_0-1]='0';
  memset(entity_2, 'S', 78-1);
  entity_2[78-1]='0';
  memset(entity_9, 'f', 65-1);
  entity_9[65-1]='0';
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[0]='0';
  entity_0 = 44;
  strcpy(entity_5, entity_7);
}