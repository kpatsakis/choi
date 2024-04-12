void fun()
{
  int entity_1 = 94;
  entity_1 = 77;
  char entity_5[71] = "";
  char* entity_7;
  char* entity_9;
  char* entity_6;
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 's', 71-1);
  entity_5[71-1]='0';
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[0]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_5);
}