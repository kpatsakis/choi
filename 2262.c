void fun()
{
  int entity_9 = 73;
  int entity_7 = 49;
  char* entity_6;
  char* entity_1;
  char entity_8[79] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_8, 'O', 79-1);
  entity_8[79-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  entity_9 = 34;
  memcpy(entity_6, entity_8, 79*sizeof(char));
}