void fun()
{
  int entity_9 = 84;
  int entity_1 = 41;
  int entity_5 = 39;
  char* entity_6;
  char* entity_8;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', entity_1-1);
  entity_3[entity_1-1]='';
  entity_6 = (char*)malloc(100*sizeof(char));
  entity_6[100-1]='';
  entity_8 = (char*)malloc(66*sizeof(char));
  entity_8[66-1]='';
  memcpy(entity_6, entity_3, entity_1*sizeof(char));
}