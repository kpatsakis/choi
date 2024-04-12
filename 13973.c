void fun()
{
  int entity_2 = 70;
  entity_2 = 75;
  char entity_7 = 'B';
  char* entity_4;
  char entity_3[entity_2] = "";
  memset(entity_3, 'D', entity_2-1);
  entity_3[entity_2-1]='0';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_3, entity_2*sizeof(char));
}