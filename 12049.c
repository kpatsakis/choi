void fun()
{
  int entity_2 = 83;
  char entity_5[67] = "";
  char* entity_6;
  char* entity_1;
  char entity_9[entity_2] = "";
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 's', entity_2-1);
  entity_9[entity_2-1]='0';
  memset(entity_5, 'M', 67-1);
  entity_5[67-1]='0';
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_9, entity_2*sizeof(char));
}