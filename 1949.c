void fun()
{
  int entity_7 = 18;
  char* entity_4;
  char entity_1[12] = "";
  entity_1 = NULL;
  memset(entity_1, 't', 12-1);
  entity_1[12-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memcpy(entity_4, entity_1, 12*sizeof(char));
}