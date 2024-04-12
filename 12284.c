void fun()
{
  int entity_6 = 46;
  char entity_5 = 'u';
  char entity_7[entity_6] = "";
  char* entity_4;
  memset(entity_7, 'v', entity_6-1);
  entity_7[entity_6-1]='0';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, entity_6*sizeof(char));
}