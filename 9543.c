void fun()
{
  int entity_1 = 10;
  char entity_9 = 'i';
  char entity_6[17] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_6, 'I', 17-1);
  entity_6[17-1]='';
  memcpy(entity_0, entity_6, 17*sizeof(char));
}