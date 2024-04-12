void fun()
{
  int entity_7 = 92;
  entity_7 = 95;
  char* entity_2;
  char entity_8[entity_7] = "";
  entity_2 = (char*)malloc(35*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'i', entity_7-1);
  entity_8[entity_7-1]='0';
  memcpy(entity_2, entity_8, entity_7*sizeof(char));
}