void fun()
{
  int entity_7 = 50;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  memset(entity_4, 'f', entity_7-1);
  entity_4[entity_7-1]='';
  memcpy(entity_1, entity_4, entity_7*sizeof(char));
}