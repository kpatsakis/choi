void fun()
{
  int entity_6 = 15;
  char* entity_3;
  char entity_4[entity_6] = "";
  memset(entity_4, 'S', entity_6-1);
  entity_4[entity_6-1]='0';
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, entity_6*sizeof(char));
}