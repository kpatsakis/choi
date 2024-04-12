void fun()
{
  int entity_8 = 91;
  int entity_1 = 98;
  char* entity_4;
  char entity_6[22] = "";
  char entity_0 = 'T';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'I', 22-1);
  entity_6[22-1]='0';
  entity_1 = 18;
  memcpy(entity_4, entity_6, 22*sizeof(char));
}