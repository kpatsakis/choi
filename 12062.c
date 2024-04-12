void fun()
{
  int entity_5 = 37;
  char* entity_9;
  char entity_1[35] = "";
  memset(entity_1, 'P', 35-1);
  entity_1[35-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_1, 35*sizeof(char));
}