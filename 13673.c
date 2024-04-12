void fun()
{
  int entity_3 = 81;
  entity_3 = 81;
  char entity_6[entity_3] = "";
  char* entity_8;
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'j', entity_3-1);
  entity_6[entity_3-1]='0';
  strcpy(entity_8, entity_6);
}