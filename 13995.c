void fun()
{
  int entity_4 = 60;
  char entity_3[entity_4] = "";
  char entity_9 = 'j';
  char* entity_7;
  char* entity_8;
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'x', entity_4-1);
  entity_3[entity_4-1]='0';
  entity_4 = 97;
  memcpy(entity_7, entity_3, entity_4*sizeof(char));
}