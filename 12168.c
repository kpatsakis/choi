void fun()
{
  int entity_7 = 100;
  char entity_2[entity_7] = "";
  char* entity_8;
  entity_8 = (char*)malloc(4*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'C', entity_7-1);
  entity_2[entity_7-1]='0';
  memcpy(entity_8, entity_2, entity_7*sizeof(char));
}