void fun()
{
  int entity_1 = 15;
  entity_1 = 19;
  char* entity_0;
  char entity_7[100] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_7, 'E', 100-1);
  entity_7[100-1]='';
  memcpy(entity_0, entity_7, 100*sizeof(char));
}