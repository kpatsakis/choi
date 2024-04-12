void fun()
{
  int entity_3 = 53;
  int entity_9 = 85;
  char* entity_4;
  char entity_6[20] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_6, 'r', 20-1);
  entity_6[20-1]='';
  entity_3 = 93;
  strcpy(entity_4, entity_6);
}