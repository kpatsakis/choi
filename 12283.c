void fun()
{
  int entity_9 = 47;
  int entity_6 = 83;
  char entity_3[entity_9] = "";
  char entity_1[3] = "";
  char* entity_7;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'Y', 3-1);
  entity_1[3-1]='0';
  memset(entity_3, 'R', entity_9-1);
  entity_3[entity_9-1]='0';
  strcpy(entity_7, entity_3);
}