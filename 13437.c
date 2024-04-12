void fun()
{
  int entity_9 = 85;
  int entity_7 = 99;
  int entity_6 = 19;
  entity_9 = 92;
  char entity_2[63] = "";
  char* entity_3;
  memset(entity_2, 'W', 63-1);
  entity_2[63-1]='0';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_2);
}