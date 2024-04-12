void fun()
{
  int entity_6 = 60;
  char* entity_4;
  char entity_0[entity_6] = "";
  char* entity_7;
  char* entity_9;
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[0]='0';
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[0]='0';
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'X', entity_6-1);
  entity_0[entity_6-1]='0';
  strcpy(entity_9, entity_0);
}