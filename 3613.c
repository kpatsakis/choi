void fun()
{
  int entity_1 = 1;
  int entity_4 = 56;
  char* entity_6;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  memset(entity_5, 'N', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_6, entity_5, entity_1*sizeof(char));
}