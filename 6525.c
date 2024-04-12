void fun()
{
  int entity_2 = 68;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_5;
  char* entity_1;
  char entity_9 = 'k';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  entity_1 = (char*)malloc(59*sizeof(char));
  entity_1[59-1]='';
  memset(entity_3, 'X', entity_2-1);
  entity_3[entity_2-1]='';
  memcpy(entity_5, entity_3, entity_2*sizeof(char));
}