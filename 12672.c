void fun()
{
  int entity_5 = 30;
  char* entity_6;
  char entity_4[22] = "";
  memset(entity_4, 'x', 22-1);
  entity_4[22-1]='0';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_4, 22*sizeof(char));
}