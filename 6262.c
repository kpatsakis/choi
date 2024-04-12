void fun()
{
  int entity_0 = 55;
  int entity_6 = 42;
  int entity_8 = 52;
  char* entity_5;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  memset(entity_2, 'h', entity_0-1);
  entity_2[entity_0-1]='';
  memcpy(entity_5, entity_2, entity_0*sizeof(char));
}