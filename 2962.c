void fun()
{
  int entity_3 = 84;
  int entity_2 = 28;
  char entity_1[9] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'h', 9-1);
  entity_1[9-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_3 = 86;
  memcpy(entity_7, entity_1, 9*sizeof(char));
}