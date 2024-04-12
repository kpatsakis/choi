void fun()
{
  int entity_3 = 22;
  char* entity_2;
  char entity_9[86] = "";
  char* entity_4;
  char* entity_7;
  memset(entity_9, 'l', 86-1);
  entity_9[86-1]='0';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[0]='0';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  entity_3 = 43;
  strcpy(entity_4, entity_9);
}