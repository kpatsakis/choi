void fun()
{
  int entity_7 = 16;
  char* entity_2;
  char entity_9[entity_7] = "";
  memset(entity_9, 'o', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_9, entity_7*sizeof(char));
}