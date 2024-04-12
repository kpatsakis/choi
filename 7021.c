void fun()
{
  int entity_1 = 92;
  entity_1 = 93;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(2*sizeof(char));
  entity_4[2-1]='';
  memset(entity_7, 'R', entity_1-1);
  entity_7[entity_1-1]='';
  memcpy(entity_4, entity_7, entity_1*sizeof(char));
}