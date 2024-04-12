void fun()
{
  int entity_6 = 70;
  char* entity_9;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_0 = 'X';
  memset(entity_4, 'e', entity_6-1);
  entity_4[entity_6-1]='';
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[83-1]='';
  memcpy(entity_9, entity_4, entity_6*sizeof(char));
}