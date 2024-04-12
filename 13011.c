void fun()
{
  int entity_3 = 45;
  char* entity_9;
  char entity_8[60] = "";
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'x', 60-1);
  entity_8[60-1]='0';
  entity_3 = 91;
  memcpy(entity_9, entity_8, 60*sizeof(char));
}