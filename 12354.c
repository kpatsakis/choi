void fun()
{
  int entity_0 = 8;
  char entity_2[entity_0] = "";
  char* entity_6;
  entity_6 = (char*)malloc(84*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'F', entity_0-1);
  entity_2[entity_0-1]='0';
  memcpy(entity_6, entity_2, entity_0*sizeof(char));
}