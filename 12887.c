void fun()
{
  int entity_7 = 56;
  int entity_8 = 68;
  char* entity_3;
  char entity_9[22] = "";
  char entity_2 = 'a';
  char* entity_0;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'm', 22-1);
  entity_9[22-1]='0';
  memcpy(entity_3, entity_9, 22*sizeof(char));
}