void fun()
{
  int entity_6 = 84;
  int entity_0 = 26;
  int entity_3 = 28;
  char* entity_7;
  char entity_2[entity_6] = "";
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'N', entity_6-1);
  entity_2[entity_6-1]='0';
  memcpy(entity_7, entity_2, entity_6*sizeof(char));
}