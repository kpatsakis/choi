void fun()
{
  int entity_0 = 62;
  entity_0 = 31;
  char* entity_1;
  char entity_7[entity_0] = "";
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 's', entity_0-1);
  entity_7[entity_0-1]='0';
  memcpy(entity_1, entity_7, entity_0*sizeof(char));
}