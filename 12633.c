void fun()
{
  int entity_2 = 35;
  char* entity_7;
  char entity_0[entity_2] = "";
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'Q', entity_2-1);
  entity_0[entity_2-1]='0';
  memcpy(entity_7, entity_0, entity_2*sizeof(char));
}