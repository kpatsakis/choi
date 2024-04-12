void fun()
{
  int entity_1 = 50;
  entity_1 = 90;
  char* entity_0;
  char entity_5[entity_1] = "";
  memset(entity_5, 'S', entity_1-1);
  entity_5[entity_1-1]='0';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_5, entity_1*sizeof(char));
}