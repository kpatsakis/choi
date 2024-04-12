void fun()
{
  int entity_6 = 14;
  int entity_9 = 97;
  char entity_1[4] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'x', 4-1);
  entity_1[4-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 29;
  memcpy(entity_3, entity_1, 4*sizeof(char));
}