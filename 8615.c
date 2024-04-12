void fun()
{
  int entity_4 = 38;
  char entity_6 = 's';
  char* entity_3;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[20-1]='';
  memset(entity_7, 'E', entity_4-1);
  entity_7[entity_4-1]='';
  memcpy(entity_3, entity_7, entity_4*sizeof(char));
}