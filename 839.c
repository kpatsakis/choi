void fun()
{
  int entity_6 = 56;
  char entity_7 = 'c';
  char* entity_9;
  char* entity_8;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(17*sizeof(char));
  entity_8[17-1]='';
  memset(entity_3, 'B', entity_6-1);
  entity_3[entity_6-1]='';
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[47-1]='';
  memcpy(entity_8, entity_3, entity_6*sizeof(char));
}