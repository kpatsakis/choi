void fun()
{
  int entity_2 = 9;
  char* entity_1;
  char entity_6[entity_2] = "";
  memset(entity_6, 'z', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, entity_2*sizeof(char));
}