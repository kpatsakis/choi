void fun()
{
  int entity_3 = 37;
  char* entity_0;
  char entity_4[entity_3] = "";
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'P', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_3 = 57;
  memcpy(entity_0, entity_4, entity_3*sizeof(char));
}