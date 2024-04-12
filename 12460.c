void fun()
{
  int entity_1 = 52;
  char* entity_4;
  char entity_5[67] = "";
  char entity_2[entity_1] = "";
  memset(entity_2, 'O', entity_1-1);
  entity_2[entity_1-1]='0';
  memset(entity_5, 'r', 67-1);
  entity_5[67-1]='0';
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, entity_1*sizeof(char));
}