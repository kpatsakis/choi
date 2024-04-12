void fun()
{
  int entity_9 = 13;
  entity_9 = 65;
  char* entity_1;
  char entity_0[9] = "";
  char* entity_5;
  char entity_2[entity_9] = "";
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(80*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'O', entity_9-1);
  entity_2[entity_9-1]='0';
  memset(entity_0, 'w', 9-1);
  entity_0[9-1]='0';
  memcpy(entity_5, entity_2, entity_9*sizeof(char));
}