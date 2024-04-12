void fun()
{
  int entity_9 = 2;
  int entity_3 = 98;
  int entity_4 = 32;
  char entity_0[62] = "";
  char* entity_6;
  char* entity_2;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'm', 62-1);
  entity_0[62-1]='0';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_6, entity_0);
}