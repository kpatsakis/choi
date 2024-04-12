void fun()
{
  int entity_2 = 4;
  entity_2 = 91;
  char entity_5[entity_2] = "";
  char* entity_1;
  char entity_9 = 'V';
  char* entity_3;
  memset(entity_5, 'w', entity_2-1);
  entity_5[entity_2-1]='0';
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_5, entity_2*sizeof(char));
}