void fun()
{
  int entity_4 = 18;
  int entity_1 = 35;
  char* entity_2;
  char entity_8 = 'F';
  char entity_5[28] = "";
  memset(entity_5, 'Z', 28-1);
  entity_5[28-1]='0';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[0]='0';
  entity_4 = 92;
  memcpy(entity_2, entity_5, 28*sizeof(char));
}