void fun()
{
  int entity_2 = 77;
  entity_2 = 53;
  char* entity_8;
  char entity_7[entity_2] = "";
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'e', entity_2-1);
  entity_7[entity_2-1]='0';
  memcpy(entity_8, entity_7, entity_2*sizeof(char));
}