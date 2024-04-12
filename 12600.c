void fun()
{
  int entity_1 = 34;
  char* entity_5;
  char entity_6[entity_1] = "";
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'z', entity_1-1);
  entity_6[entity_1-1]='0';
  memcpy(entity_5, entity_6, entity_1*sizeof(char));
}