void fun()
{
  int entity_4 = 90;
  char entity_6 = 'T';
  char entity_2[entity_4] = "";
  char* entity_0;
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'z', entity_4-1);
  entity_2[entity_4-1]='0';
  memcpy(entity_0, entity_2, entity_4*sizeof(char));
}