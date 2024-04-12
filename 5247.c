void fun()
{
  int entity_9 = 40;
  int entity_3 = 47;
  char* entity_5;
  char entity_1[34] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_1, 'i', 34-1);
  entity_1[34-1]='';
  memcpy(entity_5, entity_1, 34*sizeof(char));
}