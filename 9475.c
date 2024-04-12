void fun()
{
  int entity_1 = 68;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[70-1]='';
  memset(entity_4, 'W', entity_1-1);
  entity_4[entity_1-1]='';
  entity_1 = 38;
  memcpy(entity_6, entity_4, entity_1*sizeof(char));
}