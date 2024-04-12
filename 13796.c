void fun()
{
  int entity_4 = 58;
  entity_4 = 17;
  char* entity_7;
  char entity_2[entity_4] = "";
  char* entity_1;
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(39*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'k', entity_4-1);
  entity_2[entity_4-1]='0';
  memcpy(entity_1, entity_2, entity_4*sizeof(char));
}