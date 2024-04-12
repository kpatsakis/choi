void fun()
{
  int entity_1 = 99;
  char entity_6[42] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_6, 'T', 42-1);
  entity_6[42-1]='';
  entity_1 = 80;
  memcpy(entity_4, entity_6, 42*sizeof(char));
}