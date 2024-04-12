void fun()
{
  int entity_1 = 80;
  char* entity_6;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[88-1]='';
  memset(entity_8, 'f', entity_1-1);
  entity_8[entity_1-1]='';
  memcpy(entity_6, entity_8, entity_1*sizeof(char));
}