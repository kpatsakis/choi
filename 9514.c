void fun()
{
  int entity_5 = 3;
  entity_5 = 74;
  char* entity_1;
  char entity_6[7] = "";
  entity_6 = NULL;
  memset(entity_6, 'v', 7-1);
  entity_6[7-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memcpy(entity_1, entity_6, 7*sizeof(char));
}