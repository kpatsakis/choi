void fun()
{
  int entity_7 = 39;
  char* entity_2;
  char entity_5[entity_7] = "";
  memset(entity_5, 'M', entity_7-1);
  entity_5[entity_7-1]='0';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, entity_7*sizeof(char));
}