void fun()
{
  int entity_9 = 94;
  char entity_8[22] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'Y', 22-1);
  entity_8[22-1]='0';
  entity_9 = 71;
  strcpy(entity_3, entity_8);
}