void fun()
{
  int entity_8 = 80;
  char* entity_1;
  char entity_5 = 's';
  char entity_4 = 'm';
  char entity_2[91] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_2, 'B', 91-1);
  entity_2[91-1]='';
  memcpy(entity_1, entity_2, 91*sizeof(char));
}