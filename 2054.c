void fun()
{
  int entity_1 = 1;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[47-1]='';
  memset(entity_6, 'D', entity_1-1);
  entity_6[entity_1-1]='';
  entity_1 = 85;
  memcpy(entity_3, entity_6, entity_1*sizeof(char));
}