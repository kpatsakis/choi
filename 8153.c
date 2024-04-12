void fun()
{
  int entity_9 = 72;
  int entity_5 = 72;
  entity_9 = 63;
  char* entity_2;
  char* entity_3;
  char entity_1[34] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  memset(entity_1, 'x', 34-1);
  entity_1[34-1]='';
  memcpy(entity_3, entity_1, 34*sizeof(char));
}