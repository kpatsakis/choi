void fun()
{
  int entity_1 = 33;
  char* entity_6;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'X', entity_1-1);
  entity_2[entity_1-1]='';
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  memcpy(entity_6, entity_2, entity_1*sizeof(char));
}