void fun()
{
  int entity_1 = 12;
  int entity_3 = 41;
  entity_3 = 97;
  char entity_5[14] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_5, 'g', 14-1);
  entity_5[14-1]='';
  memcpy(entity_9, entity_5, 14*sizeof(char));
}