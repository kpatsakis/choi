void fun()
{
  int entity_8 = 70;
  int entity_9 = 66;
  char* entity_6;
  char* entity_5;
  char entity_2[entity_9] = "";
  char entity_4[48] = "";
  memset(entity_2, 'T', entity_9-1);
  entity_2[entity_9-1]='0';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 't', 48-1);
  entity_4[48-1]='0';
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[0]='0';
  entity_9 = 63;
  strcpy(entity_6, entity_2);
}