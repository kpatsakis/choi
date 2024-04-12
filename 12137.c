void fun()
{
  int entity_9 = 90;
  char* entity_3;
  char* entity_2;
  char entity_7[entity_9] = "";
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'C', entity_9-1);
  entity_7[entity_9-1]='0';
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_7, entity_9*sizeof(char));
}