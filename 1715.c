void fun()
{
  int entity_9 = 74;
  int entity_8 = 36;
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_1 = 'c';
  memset(entity_3, 'S', 9-1);
  entity_3[9-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_3, 9*sizeof(char));
}