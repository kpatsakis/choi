void fun()
{
  int entity_5 = 10;
  int entity_9 = 25;
  char entity_2[12] = "";
  char* entity_3;
  char* entity_4;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 's', 12-1);
  entity_2[12-1]='0';
  entity_9 = 37;
  strcpy(entity_3, entity_2);
}