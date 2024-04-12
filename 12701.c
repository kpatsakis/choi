void fun()
{
  int entity_9 = 95;
  char* entity_7;
  char entity_4[41] = "";
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 's', 41-1);
  entity_4[41-1]='0';
  strcpy(entity_7, entity_4);
}