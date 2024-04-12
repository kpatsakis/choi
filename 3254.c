void fun()
{
  int entity_8 = 50;
  int entity_1 = 8;
  int entity_3 = 54;
  char entity_5 = 'z';
  char* entity_9;
  char entity_2[30] = "";
  entity_2 = NULL;
  memset(entity_2, 'a', 30-1);
  entity_2[30-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memcpy(entity_9, entity_2, 30*sizeof(char));
}