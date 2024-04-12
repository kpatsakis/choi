void fun()
{
  int entity_0 = 65;
  char entity_7 = 'E';
  char entity_9[43] = "";
  char* entity_6;
  char entity_2[entity_0] = "";
  char* entity_8;
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'r', entity_0-1);
  entity_2[entity_0-1]='0';
  memset(entity_9, 'P', 43-1);
  entity_9[43-1]='0';
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_8, entity_2);
}