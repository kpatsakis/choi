void fun()
{
  int entity_9 = 95;
  int entity_5 = 37;
  entity_9 = 74;
  char* entity_0;
  char* entity_3;
  char entity_2[73] = "";
  memset(entity_2, 'r', 73-1);
  entity_2[73-1]='0';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_3, entity_2);
}