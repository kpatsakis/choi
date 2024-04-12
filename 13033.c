void fun()
{
  int entity_2 = 18;
  entity_2 = 47;
  char entity_9[34] = "";
  char* entity_5;
  char entity_8[entity_2] = "";
  memset(entity_8, 's', entity_2-1);
  entity_8[entity_2-1]='0';
  memset(entity_9, 'V', 34-1);
  entity_9[34-1]='0';
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, entity_2*sizeof(char));
}