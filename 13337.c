void fun()
{
  int entity_6 = 14;
  int entity_1 = 25;
  entity_1 = 48;
  char* entity_7;
  char entity_9[53] = "";
  char* entity_5;
  char entity_2 = 'y';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'u', 53-1);
  entity_9[53-1]='0';
  strcpy(entity_5, entity_9);
}