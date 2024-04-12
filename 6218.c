void fun()
{
  int entity_1 = 49;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_3 = 'Y';
  char* entity_8;
  memset(entity_9, 'f', entity_1-1);
  entity_9[entity_1-1]='';
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[59-1]='';
  entity_1 = 48;
  memcpy(entity_8, entity_9, entity_1*sizeof(char));
}