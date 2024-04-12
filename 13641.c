void fun()
{
  int entity_9 = 87;
  int entity_0 = 31;
  int entity_6 = 35;
  entity_6 = 83;
  char* entity_2;
  char entity_1[entity_6] = "";
  char* entity_5;
  memset(entity_1, 's', entity_6-1);
  entity_1[entity_6-1]='0';
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[0]='0';
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_1, entity_6*sizeof(char));
}