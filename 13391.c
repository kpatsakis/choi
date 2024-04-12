void fun()
{
  int entity_9 = 57;
  entity_9 = 57;
  char entity_2[79] = "";
  char entity_5 = 'c';
  char entity_4[entity_9] = "";
  char* entity_3;
  char entity_1[64] = "";
  memset(entity_2, 'j', 79-1);
  entity_2[79-1]='0';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'b', 64-1);
  entity_1[64-1]='0';
  memset(entity_4, 's', entity_9-1);
  entity_4[entity_9-1]='0';
  strcpy(entity_3, entity_4);
}