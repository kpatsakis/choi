void fun()
{
  int entity_5 = 60;
  int entity_6 = 5;
  int entity_0 = 43;
  char entity_3[entity_6] = "";
  char* entity_7;
  char entity_1 = 'm';
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'c', entity_6-1);
  entity_3[entity_6-1]='0';
  entity_6 = 44;
  memcpy(entity_7, entity_3, entity_6*sizeof(char));
}