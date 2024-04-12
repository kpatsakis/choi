void fun()
{
  int entity_1 = 91;
  char* entity_2;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_7 = 'Q';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  memset(entity_6, 'm', entity_1-1);
  entity_6[entity_1-1]='';
  memcpy(entity_2, entity_6, entity_1*sizeof(char));
}