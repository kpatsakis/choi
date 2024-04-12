void fun()
{
  int entity_7 = 9;
  char* entity_0;
  char entity_2[entity_7] = "";
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'I', entity_7-1);
  entity_2[entity_7-1]='0';
  memcpy(entity_0, entity_2, entity_7*sizeof(char));
}