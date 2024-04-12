void fun()
{
  int entity_6 = 65;
  int entity_3 = 61;
  char entity_9[35] = "";
  char* entity_7;
  char entity_4[entity_6] = "";
  memset(entity_9, 'y', 35-1);
  entity_9[35-1]='0';
  memset(entity_4, 'y', entity_6-1);
  entity_4[entity_6-1]='0';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, entity_6*sizeof(char));
}