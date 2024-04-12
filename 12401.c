void fun()
{
  int entity_2 = 92;
  int entity_6 = 20;
  char entity_9[entity_6] = "";
  char* entity_5;
  char* entity_7;
  memset(entity_9, 'v', entity_6-1);
  entity_9[entity_6-1]='0';
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[0]='0';
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}