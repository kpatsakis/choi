void fun()
{
  int entity_4 = 3;
  int entity_6 = 17;
  entity_6 = 47;
  char entity_1 = 'A';
  char entity_3[49] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_3, 'O', 49-1);
  entity_3[49-1]='';
  memcpy(entity_9, entity_3, 49*sizeof(char));
}