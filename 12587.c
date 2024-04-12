void fun()
{
  int entity_2 = 25;
  char entity_6[74] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 't', 74-1);
  entity_6[74-1]='0';
  memcpy(entity_9, entity_6, 74*sizeof(char));
}