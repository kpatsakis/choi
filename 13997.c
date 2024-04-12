void fun()
{
  int entity_3 = 86;
  char* entity_6;
  char entity_2[entity_3] = "";
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'r', entity_3-1);
  entity_2[entity_3-1]='0';
  entity_3 = 36;
  memcpy(entity_6, entity_2, entity_3*sizeof(char));
}