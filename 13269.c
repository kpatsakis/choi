void fun()
{
  int entity_1 = 32;
  int entity_7 = 74;
  char entity_8 = 'k';
  char* entity_9;
  char entity_5 = 'c';
  char entity_0[74] = "";
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'o', 74-1);
  entity_0[74-1]='0';
  entity_7 = 74;
  memcpy(entity_9, entity_0, 74*sizeof(char));
}