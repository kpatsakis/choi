void fun()
{
  int entity_2 = 2;
  int entity_0 = 58;
  int entity_8 = 30;
  char* entity_3;
  char entity_9[entity_8] = "";
  char* entity_1;
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'q', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}