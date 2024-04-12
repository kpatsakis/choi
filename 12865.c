void fun()
{
  int entity_9 = 85;
  int entity_5 = 70;
  char entity_2[81] = "";
  char* entity_7;
  char entity_1[74] = "";
  memset(entity_1, 'E', 74-1);
  entity_1[74-1]='0';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'I', 81-1);
  entity_2[81-1]='0';
  strcpy(entity_7, entity_1);
}