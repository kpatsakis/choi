void fun()
{
  int entity_5 = 69;
  char entity_0 = 'E';
  char entity_2[entity_5] = "";
  char* entity_6;
  char* entity_7;
  memset(entity_2, 'O', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[0]='0';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_7, entity_2, entity_5*sizeof(char));
}