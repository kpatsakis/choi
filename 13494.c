void fun()
{
  int entity_6 = 1;
  entity_6 = 91;
  char entity_3[entity_6] = "";
  char* entity_0;
  memset(entity_3, 'a', entity_6-1);
  entity_3[entity_6-1]='0';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_3, entity_6*sizeof(char));
}