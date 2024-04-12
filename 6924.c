void fun()
{
  int entity_1 = 20;
  char entity_3[36] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_9 = 'O';
  memset(entity_3, 'n', 36-1);
  entity_3[36-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_1 = 78;
  memcpy(entity_0, entity_3, 36*sizeof(char));
}