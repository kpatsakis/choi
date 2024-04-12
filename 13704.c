void fun()
{
  int entity_4 = 18;
  char entity_2[entity_4] = "";
  char* entity_9;
  char* entity_1;
  char entity_6 = 'o';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'f', entity_4-1);
  entity_2[entity_4-1]='0';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[0]='0';
  entity_4 = 78;
  memcpy(entity_1, entity_2, entity_4*sizeof(char));
}