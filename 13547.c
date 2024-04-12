void fun()
{
  int entity_8 = 17;
  int entity_5 = 7;
  char entity_1[35] = "";
  char* entity_0;
  char entity_9[entity_8] = "";
  char* entity_2;
  memset(entity_1, 'P', 35-1);
  entity_1[35-1]='0';
  entity_0 = (char*)malloc(95*sizeof(char));
  entity_0[0]='0';
  entity_2 = (char*)malloc(45*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'M', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_8 = 21;
  strcpy(entity_2, entity_9);
}