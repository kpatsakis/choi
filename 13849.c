void fun()
{
  int entity_6 = 64;
  char* entity_1;
  char entity_4[entity_6] = "";
  char* entity_0;
  memset(entity_4, 'z', entity_6-1);
  entity_4[entity_6-1]='0';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[0]='0';
  entity_1 = (char*)malloc(60*sizeof(char));
  entity_1[0]='0';
  entity_6 = 94;
  strcpy(entity_0, entity_4);
}