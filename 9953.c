void fun()
{
  int entity_8 = 81;
  char entity_6[28] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'l', 28-1);
  entity_6[28-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memcpy(entity_5, entity_6, 28*sizeof(char));
}