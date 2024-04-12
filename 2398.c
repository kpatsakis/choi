void fun()
{
  int entity_1 = 91;
  int entity_5 = 25;
  char* entity_2;
  char entity_6[41] = "";
  entity_6 = NULL;
  memset(entity_6, 'E', 41-1);
  entity_6[41-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_5 = 79;
  memcpy(entity_2, entity_6, 41*sizeof(char));
}