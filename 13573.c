void fun()
{
  int entity_3 = 20;
  int entity_9 = 92;
  char entity_5[entity_3] = "";
  char* entity_4;
  char entity_2[27] = "";
  char* entity_7;
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[0]='0';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'm', 27-1);
  entity_2[27-1]='0';
  memset(entity_5, 'C', entity_3-1);
  entity_5[entity_3-1]='0';
  entity_3 = 3;
  strcpy(entity_7, entity_5);
}