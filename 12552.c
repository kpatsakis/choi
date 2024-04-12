void fun()
{
  int entity_8 = 70;
  int entity_9 = 30;
  int entity_3 = 37;
  char entity_5[entity_8] = "";
  char entity_1 = 'I';
  char* entity_2;
  memset(entity_5, 'h', entity_8-1);
  entity_5[entity_8-1]='0';
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}