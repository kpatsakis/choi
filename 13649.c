void fun()
{
  int entity_7 = 97;
  char* entity_2;
  char entity_4[entity_7] = "";
  memset(entity_4, 'y', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[0]='0';
  entity_7 = 6;
  memcpy(entity_2, entity_4, entity_7*sizeof(char));
}