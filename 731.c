void fun()
{
  int entity_1 = 42;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_6 = 'Y';
  char entity_0 = 'x';
  char* entity_8;
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[32-1]='';
  memset(entity_5, 'x', entity_1-1);
  entity_5[entity_1-1]='';
  entity_1 = 30;
  memcpy(entity_8, entity_5, entity_1*sizeof(char));
}