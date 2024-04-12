void fun()
{
  int entity_8 = 45;
  int entity_9 = 90;
  int entity_2 = 83;
  entity_8 = 45;
  char* entity_4;
  char* entity_0;
  char entity_3[entity_8] = "";
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[0]='0';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'X', entity_8-1);
  entity_3[entity_8-1]='0';
  strcpy(entity_4, entity_3);
}