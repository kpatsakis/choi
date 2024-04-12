void fun()
{
  int entity_1 = 8;
  entity_1 = 80;
  char entity_3[entity_1] = "";
  char* entity_5;
  char* entity_2;
  char entity_9 = 'n';
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'h', entity_1-1);
  entity_3[entity_1-1]='0';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_3, entity_1*sizeof(char));
}