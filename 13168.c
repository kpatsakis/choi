void fun()
{
  int entity_3 = 15;
  entity_3 = 81;
  char* entity_7;
  char entity_2[entity_3] = "";
  entity_7 = (char*)malloc(100*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'A', entity_3-1);
  entity_2[entity_3-1]='0';
  memcpy(entity_7, entity_2, entity_3*sizeof(char));
}